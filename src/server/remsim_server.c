#include <unistd.h>

#include <sys/eventfd.h>

#include <osmocom/core/utils.h>
#include <osmocom/core/talloc.h>
#include <osmocom/core/application.h>
#include <osmocom/core/select.h>

#include "debug.h"
#include "slotmap.h"
#include "rest_api.h"
#include "rspro_server.h"

struct rspro_server *g_rps;
void *g_tall_ctx;
struct osmo_fd g_event_ofd;

int main(int argc, char **argv)
{
	int rc;

	g_tall_ctx = talloc_named_const(NULL, 0, "global");

	osmo_init_logging2(g_tall_ctx, &log_info);

	g_rps = rspro_server_create(g_tall_ctx, "0.0.0.0", 9998);
	if (!g_rps)
		exit(1);
	g_rps->slotmaps = slotmap_init(g_rps);
	if (!g_rps->slotmaps)
		goto out_rspro;

	g_rps->comp_id.type = ComponentType_remsimServer;
	OSMO_STRLCPY_ARRAY(g_rps->comp_id.name, "fixme-name");
	OSMO_STRLCPY_ARRAY(g_rps->comp_id.software, "remsim-server");
	OSMO_STRLCPY_ARRAY(g_rps->comp_id.sw_version, PACKAGE_VERSION);
	/* FIXME: other members of app_comp_id */

	rc = eventfd(0, 0);
	if (rc < 0)
		goto out_rps;
	osmo_fd_setup(&g_event_ofd, rc, BSC_FD_READ, event_fd_cb, g_rps, 0);
	osmo_fd_register(&g_event_ofd);

	rc = rest_api_init(9997);
	if (rc < 0)
		goto out_eventfd;

	while (1) {
		osmo_select_main(0);
	}

	rest_api_fini();

	exit(0);

out_eventfd:
	close(g_event_ofd.fd);
out_rps:
	talloc_free(g_rps->slotmaps);
	talloc_free(g_rps);
out_rspro:
	rspro_server_destroy(g_rps);

	exit(1);
}
