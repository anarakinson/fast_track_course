/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "UEInformationRequest-r9-IEs.h"

#include "UEInformationRequest-v930-IEs.h"
asn_TYPE_member_t asn_MBR_UEInformationRequest_r9_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UEInformationRequest_r9_IEs, rach_ReportReq_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach-ReportReq-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UEInformationRequest_r9_IEs, rlf_ReportReq_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlf-ReportReq-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct UEInformationRequest_r9_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UEInformationRequest_v930_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UEInformationRequest_r9_IEs_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_UEInformationRequest_r9_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UEInformationRequest_r9_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rach-ReportReq-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rlf-ReportReq-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UEInformationRequest_r9_IEs_specs_1 = {
	sizeof(struct UEInformationRequest_r9_IEs),
	offsetof(struct UEInformationRequest_r9_IEs, _asn_ctx),
	asn_MAP_UEInformationRequest_r9_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_UEInformationRequest_r9_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UEInformationRequest_r9_IEs = {
	"UEInformationRequest-r9-IEs",
	"UEInformationRequest-r9-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UEInformationRequest_r9_IEs_tags_1,
	sizeof(asn_DEF_UEInformationRequest_r9_IEs_tags_1)
		/sizeof(asn_DEF_UEInformationRequest_r9_IEs_tags_1[0]), /* 1 */
	asn_DEF_UEInformationRequest_r9_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UEInformationRequest_r9_IEs_tags_1)
		/sizeof(asn_DEF_UEInformationRequest_r9_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UEInformationRequest_r9_IEs_1,
	3,	/* Elements count */
	&asn_SPC_UEInformationRequest_r9_IEs_specs_1	/* Additional specs */
};

