/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "RRCConnectionRelease-v1530-IEs.h"

#include "MeasIdleConfigDedicated-r15.h"
#include "RRC-InactiveConfig-r15.h"
#include "RRCConnectionRelease-v1540-IEs.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_drb_ContinueROHC_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_cn_Type_r15_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_drb_ContinueROHC_r15_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_drb_ContinueROHC_r15_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_drb_ContinueROHC_r15_specs_2 = {
	asn_MAP_drb_ContinueROHC_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_drb_ContinueROHC_r15_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_drb_ContinueROHC_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drb_ContinueROHC_r15_2 = {
	"drb-ContinueROHC-r15",
	"drb-ContinueROHC-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_drb_ContinueROHC_r15_tags_2,
	sizeof(asn_DEF_drb_ContinueROHC_r15_tags_2)
		/sizeof(asn_DEF_drb_ContinueROHC_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_drb_ContinueROHC_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_drb_ContinueROHC_r15_tags_2)
		/sizeof(asn_DEF_drb_ContinueROHC_r15_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_drb_ContinueROHC_r15_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drb_ContinueROHC_r15_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_cn_Type_r15_value2enum_7[] = {
	{ 0,	3,	"epc" },
	{ 1,	6,	"fivegc" }
};
static const unsigned int asn_MAP_cn_Type_r15_enum2value_7[] = {
	0,	/* epc(0) */
	1	/* fivegc(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_cn_Type_r15_specs_7 = {
	asn_MAP_cn_Type_r15_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_cn_Type_r15_enum2value_7,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cn_Type_r15_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cn_Type_r15_7 = {
	"cn-Type-r15",
	"cn-Type-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_cn_Type_r15_tags_7,
	sizeof(asn_DEF_cn_Type_r15_tags_7)
		/sizeof(asn_DEF_cn_Type_r15_tags_7[0]) - 1, /* 1 */
	asn_DEF_cn_Type_r15_tags_7,	/* Same as above */
	sizeof(asn_DEF_cn_Type_r15_tags_7)
		/sizeof(asn_DEF_cn_Type_r15_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_cn_Type_r15_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cn_Type_r15_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCConnectionRelease_v1530_IEs_1[] = {
	{ ATF_POINTER, 6, offsetof(struct RRCConnectionRelease_v1530_IEs, drb_ContinueROHC_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drb_ContinueROHC_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-ContinueROHC-r15"
		},
	{ ATF_POINTER, 5, offsetof(struct RRCConnectionRelease_v1530_IEs, nextHopChainingCount_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NextHopChainingCount,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nextHopChainingCount-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct RRCConnectionRelease_v1530_IEs, measIdleConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasIdleConfigDedicated_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measIdleConfig-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionRelease_v1530_IEs, rrc_InactiveConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_InactiveConfig_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrc-InactiveConfig-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionRelease_v1530_IEs, cn_Type_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cn_Type_r15_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cn-Type-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionRelease_v1530_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionRelease_v1540_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRCConnectionRelease_v1530_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionRelease_v1530_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionRelease_v1530_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drb-ContinueROHC-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nextHopChainingCount-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measIdleConfig-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rrc-InactiveConfig-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* cn-Type-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionRelease_v1530_IEs_specs_1 = {
	sizeof(struct RRCConnectionRelease_v1530_IEs),
	offsetof(struct RRCConnectionRelease_v1530_IEs, _asn_ctx),
	asn_MAP_RRCConnectionRelease_v1530_IEs_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_RRCConnectionRelease_v1530_IEs_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionRelease_v1530_IEs = {
	"RRCConnectionRelease-v1530-IEs",
	"RRCConnectionRelease-v1530-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionRelease_v1530_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionRelease_v1530_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionRelease_v1530_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionRelease_v1530_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionRelease_v1530_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionRelease_v1530_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCConnectionRelease_v1530_IEs_1,
	6,	/* Elements count */
	&asn_SPC_RRCConnectionRelease_v1530_IEs_specs_1	/* Additional specs */
};

