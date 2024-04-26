/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "MeasResultServCellSCG-r12.h"

static asn_TYPE_member_t asn_MBR_measResultSCell_r12_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServCellSCG_r12__measResultSCell_r12, rsrpResultSCell_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrpResultSCell-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServCellSCG_r12__measResultSCell_r12, rsrqResultSCell_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrqResultSCell-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_measResultSCell_r12_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measResultSCell_r12_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rsrpResultSCell-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rsrqResultSCell-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResultSCell_r12_specs_3 = {
	sizeof(struct MeasResultServCellSCG_r12__measResultSCell_r12),
	offsetof(struct MeasResultServCellSCG_r12__measResultSCell_r12, _asn_ctx),
	asn_MAP_measResultSCell_r12_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultSCell_r12_3 = {
	"measResultSCell-r12",
	"measResultSCell-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_measResultSCell_r12_tags_3,
	sizeof(asn_DEF_measResultSCell_r12_tags_3)
		/sizeof(asn_DEF_measResultSCell_r12_tags_3[0]) - 1, /* 1 */
	asn_DEF_measResultSCell_r12_tags_3,	/* Same as above */
	sizeof(asn_DEF_measResultSCell_r12_tags_3)
		/sizeof(asn_DEF_measResultSCell_r12_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_measResultSCell_r12_3,
	2,	/* Elements count */
	&asn_SPC_measResultSCell_r12_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_measResultSCell_v1310_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServCellSCG_r12__measResultSCell_v1310, rs_sinr_ResultSCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RS_SINR_Range_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rs-sinr-ResultSCell-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_measResultSCell_v1310_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measResultSCell_v1310_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rs-sinr-ResultSCell-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResultSCell_v1310_specs_8 = {
	sizeof(struct MeasResultServCellSCG_r12__measResultSCell_v1310),
	offsetof(struct MeasResultServCellSCG_r12__measResultSCell_v1310, _asn_ctx),
	asn_MAP_measResultSCell_v1310_tag2el_8,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultSCell_v1310_8 = {
	"measResultSCell-v1310",
	"measResultSCell-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_measResultSCell_v1310_tags_8,
	sizeof(asn_DEF_measResultSCell_v1310_tags_8)
		/sizeof(asn_DEF_measResultSCell_v1310_tags_8[0]) - 1, /* 1 */
	asn_DEF_measResultSCell_v1310_tags_8,	/* Same as above */
	sizeof(asn_DEF_measResultSCell_v1310_tags_8)
		/sizeof(asn_DEF_measResultSCell_v1310_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_measResultSCell_v1310_8,
	1,	/* Elements count */
	&asn_SPC_measResultSCell_v1310_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasResultServCellSCG_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServCellSCG_r12, servCellId_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServCellIndex_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servCellId-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServCellSCG_r12, measResultSCell_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_measResultSCell_r12_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultSCell-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasResultServCellSCG_r12, servCellId_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServCellIndex_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servCellId-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultServCellSCG_r12, measResultSCell_v1310),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_measResultSCell_v1310_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultSCell-v1310"
		},
};
static const int asn_MAP_MeasResultServCellSCG_r12_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_MeasResultServCellSCG_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResultServCellSCG_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* servCellId-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measResultSCell-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* servCellId-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* measResultSCell-v1310 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasResultServCellSCG_r12_specs_1 = {
	sizeof(struct MeasResultServCellSCG_r12),
	offsetof(struct MeasResultServCellSCG_r12, _asn_ctx),
	asn_MAP_MeasResultServCellSCG_r12_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MeasResultServCellSCG_r12_oms_1,	/* Optional members */
	0, 2,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultServCellSCG_r12 = {
	"MeasResultServCellSCG-r12",
	"MeasResultServCellSCG-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResultServCellSCG_r12_tags_1,
	sizeof(asn_DEF_MeasResultServCellSCG_r12_tags_1)
		/sizeof(asn_DEF_MeasResultServCellSCG_r12_tags_1[0]), /* 1 */
	asn_DEF_MeasResultServCellSCG_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultServCellSCG_r12_tags_1)
		/sizeof(asn_DEF_MeasResultServCellSCG_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasResultServCellSCG_r12_1,
	4,	/* Elements count */
	&asn_SPC_MeasResultServCellSCG_r12_specs_1	/* Additional specs */
};

