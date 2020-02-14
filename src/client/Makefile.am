AM_CFLAGS = -Wall -I$(top_srcdir)/include -I/$(top_builddir)/include -I$(top_srcdir)/src \
	    $(OSMOCORE_CFLAGS) $(OSMOGSM_CFLAGS) $(OSMOABIS_CFLAGS) \
	    $(PCSC_CFLAGS) $(USB_CFLAGS) $(OSMOSIM_CFLAGS) \
	    $(OSMOSIMTRACE2_CFLAGS) \
	    -I$(top_srcdir)/include/osmocom/rspro

bin_PROGRAMS = osmo-remsim-client-st2 osmo-remsim-client-shell

lib_LTLIBRARIES = libifd_remsim_client.la

osmo_remsim_client_shell_SOURCES = user_shell.c remsim_client_main.c \
				   remsim_client.c ../rspro_client_fsm.c ../debug.c
osmo_remsim_client_shell_CFLAGS = $(AM_CFLAGS)
osmo_remsim_client_shell_LDADD = $(OSMOCORE_LIBS) $(OSMOGSM_LIBS) $(OSMOABIS_LIBS) \
		      $(top_builddir)/src/libosmo-rspro.la

libifd_remsim_client_la_SOURCES = user_ifdhandler.c \
				   remsim_client.c ../rspro_client_fsm.c ../debug.c
libifd_remsim_client_la_LDFLAGS = -no-undefined
libifd_remsim_client_la_CPPFLAGS = $(PCSC_CFLAGS)
libifd_remsim_client_la_LIBADD = $(OSMOCORE_LIBS) $(OSMOGSM_LIBS) $(OSMOABIS_LIBS) \
		      $(top_builddir)/src/libosmo-rspro.la

osmo_remsim_client_st2_SOURCES = simtrace2-remsim_client.c \
				 ../rspro_client_fsm.c ../debug.c
osmo_remsim_client_st2_CFLAGS = $(AM_CFLAGS)
osmo_remsim_client_st2_LDADD = $(OSMOCORE_LIBS) $(OSMOGSM_LIBS) $(OSMOABIS_LIBS) \
			       $(OSMOUSB_LIBS) $(OSMOSIMTRACE2_LIBS) \
			       $(USB_LIBS) $(OSMOSIM_LIBS) \
			       $(top_builddir)/src/libosmo-rspro.la

noinst_HEADERS = client.h 
