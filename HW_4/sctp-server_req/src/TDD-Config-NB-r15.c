/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "TDD-Config-NB-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_subframeAssignment_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_specialSubframePatterns_r15_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  11 }	/* (0..11) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_subframeAssignment_r15_value2enum_2[] = {
	{ 0,	3,	"sa1" },
	{ 1,	3,	"sa2" },
	{ 2,	3,	"sa3" },
	{ 3,	3,	"sa4" },
	{ 4,	3,	"sa5" }
};
static const unsigned int asn_MAP_subframeAssignment_r15_enum2value_2[] = {
	0,	/* sa1(0) */
	1,	/* sa2(1) */
	2,	/* sa3(2) */
	3,	/* sa4(3) */
	4	/* sa5(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_subframeAssignment_r15_specs_2 = {
	asn_MAP_subframeAssignment_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_subframeAssignment_r15_enum2value_2,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_subframeAssignment_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subframeAssignment_r15_2 = {
	"subframeAssignment-r15",
	"subframeAssignment-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_subframeAssignment_r15_tags_2,
	sizeof(asn_DEF_subframeAssignment_r15_tags_2)
		/sizeof(asn_DEF_subframeAssignment_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_subframeAssignment_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_subframeAssignment_r15_tags_2)
		/sizeof(asn_DEF_subframeAssignment_r15_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_subframeAssignment_r15_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_subframeAssignment_r15_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_specialSubframePatterns_r15_value2enum_8[] = {
	{ 0,	4,	"ssp0" },
	{ 1,	4,	"ssp1" },
	{ 2,	4,	"ssp2" },
	{ 3,	4,	"ssp3" },
	{ 4,	4,	"ssp4" },
	{ 5,	4,	"ssp5" },
	{ 6,	4,	"ssp6" },
	{ 7,	4,	"ssp7" },
	{ 8,	4,	"ssp8" },
	{ 9,	4,	"ssp9" },
	{ 10,	5,	"ssp10" },
	{ 11,	19,	"ssp10-CRS-LessDwPTS" }
};
static const unsigned int asn_MAP_specialSubframePatterns_r15_enum2value_8[] = {
	0,	/* ssp0(0) */
	1,	/* ssp1(1) */
	10,	/* ssp10(10) */
	11,	/* ssp10-CRS-LessDwPTS(11) */
	2,	/* ssp2(2) */
	3,	/* ssp3(3) */
	4,	/* ssp4(4) */
	5,	/* ssp5(5) */
	6,	/* ssp6(6) */
	7,	/* ssp7(7) */
	8,	/* ssp8(8) */
	9	/* ssp9(9) */
};
static const asn_INTEGER_specifics_t asn_SPC_specialSubframePatterns_r15_specs_8 = {
	asn_MAP_specialSubframePatterns_r15_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_specialSubframePatterns_r15_enum2value_8,	/* N => "tag"; sorted by N */
	12,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_specialSubframePatterns_r15_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_specialSubframePatterns_r15_8 = {
	"specialSubframePatterns-r15",
	"specialSubframePatterns-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_specialSubframePatterns_r15_tags_8,
	sizeof(asn_DEF_specialSubframePatterns_r15_tags_8)
		/sizeof(asn_DEF_specialSubframePatterns_r15_tags_8[0]) - 1, /* 1 */
	asn_DEF_specialSubframePatterns_r15_tags_8,	/* Same as above */
	sizeof(asn_DEF_specialSubframePatterns_r15_tags_8)
		/sizeof(asn_DEF_specialSubframePatterns_r15_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_specialSubframePatterns_r15_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_specialSubframePatterns_r15_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_TDD_Config_NB_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TDD_Config_NB_r15, subframeAssignment_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_subframeAssignment_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subframeAssignment-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TDD_Config_NB_r15, specialSubframePatterns_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_specialSubframePatterns_r15_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"specialSubframePatterns-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_TDD_Config_NB_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TDD_Config_NB_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* subframeAssignment-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* specialSubframePatterns-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_TDD_Config_NB_r15_specs_1 = {
	sizeof(struct TDD_Config_NB_r15),
	offsetof(struct TDD_Config_NB_r15, _asn_ctx),
	asn_MAP_TDD_Config_NB_r15_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TDD_Config_NB_r15 = {
	"TDD-Config-NB-r15",
	"TDD-Config-NB-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_TDD_Config_NB_r15_tags_1,
	sizeof(asn_DEF_TDD_Config_NB_r15_tags_1)
		/sizeof(asn_DEF_TDD_Config_NB_r15_tags_1[0]), /* 1 */
	asn_DEF_TDD_Config_NB_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_TDD_Config_NB_r15_tags_1)
		/sizeof(asn_DEF_TDD_Config_NB_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TDD_Config_NB_r15_1,
	2,	/* Elements count */
	&asn_SPC_TDD_Config_NB_r15_specs_1	/* Additional specs */
};

