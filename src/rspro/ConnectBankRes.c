/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RSPRO"
 * 	found in "../../asn1/RSPRO.asn"
 */

#include <osmocom/rspro/ConnectBankRes.h>

static asn_TYPE_member_t asn_MBR_ConnectBankRes_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ConnectBankRes, identity),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ComponentIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConnectBankRes, result),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_ResultCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"result"
		},
};
static const ber_tlv_tag_t asn_DEF_ConnectBankRes_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ConnectBankRes_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 1, 0, 0 }, /* result */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 } /* identity */
};
static asn_SEQUENCE_specifics_t asn_SPC_ConnectBankRes_specs_1 = {
	sizeof(struct ConnectBankRes),
	offsetof(struct ConnectBankRes, _asn_ctx),
	asn_MAP_ConnectBankRes_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ConnectBankRes = {
	"ConnectBankRes",
	"ConnectBankRes",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No UPER support, use "-gen-PER" to enable */
	0, 0,	/* No APER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ConnectBankRes_tags_1,
	sizeof(asn_DEF_ConnectBankRes_tags_1)
		/sizeof(asn_DEF_ConnectBankRes_tags_1[0]), /* 1 */
	asn_DEF_ConnectBankRes_tags_1,	/* Same as above */
	sizeof(asn_DEF_ConnectBankRes_tags_1)
		/sizeof(asn_DEF_ConnectBankRes_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ConnectBankRes_1,
	2,	/* Elements count */
	&asn_SPC_ConnectBankRes_specs_1	/* Additional specs */
};

