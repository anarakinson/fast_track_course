/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SecurityAlgorithmConfig.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_integrityProtAlgorithm_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_integrityProtAlgorithm_value2enum_3[] = {
	{ 0,	9,	"eia0-v920" },
	{ 1,	4,	"eia1" },
	{ 2,	4,	"eia2" },
	{ 3,	10,	"eia3-v1130" },
	{ 4,	6,	"spare4" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_integrityProtAlgorithm_enum2value_3[] = {
	0,	/* eia0-v920(0) */
	1,	/* eia1(1) */
	2,	/* eia2(2) */
	3,	/* eia3-v1130(3) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5,	/* spare3(5) */
	4	/* spare4(4) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_integrityProtAlgorithm_specs_3 = {
	asn_MAP_integrityProtAlgorithm_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_integrityProtAlgorithm_enum2value_3,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	9,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_integrityProtAlgorithm_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_integrityProtAlgorithm_3 = {
	"integrityProtAlgorithm",
	"integrityProtAlgorithm",
	&asn_OP_NativeEnumerated,
	asn_DEF_integrityProtAlgorithm_tags_3,
	sizeof(asn_DEF_integrityProtAlgorithm_tags_3)
		/sizeof(asn_DEF_integrityProtAlgorithm_tags_3[0]) - 1, /* 1 */
	asn_DEF_integrityProtAlgorithm_tags_3,	/* Same as above */
	sizeof(asn_DEF_integrityProtAlgorithm_tags_3)
		/sizeof(asn_DEF_integrityProtAlgorithm_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_integrityProtAlgorithm_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_integrityProtAlgorithm_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SecurityAlgorithmConfig_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SecurityAlgorithmConfig, cipheringAlgorithm),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CipheringAlgorithm_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cipheringAlgorithm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecurityAlgorithmConfig, integrityProtAlgorithm),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_integrityProtAlgorithm_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"integrityProtAlgorithm"
		},
};
static const ber_tlv_tag_t asn_DEF_SecurityAlgorithmConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SecurityAlgorithmConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cipheringAlgorithm */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* integrityProtAlgorithm */
};
asn_SEQUENCE_specifics_t asn_SPC_SecurityAlgorithmConfig_specs_1 = {
	sizeof(struct SecurityAlgorithmConfig),
	offsetof(struct SecurityAlgorithmConfig, _asn_ctx),
	asn_MAP_SecurityAlgorithmConfig_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SecurityAlgorithmConfig = {
	"SecurityAlgorithmConfig",
	"SecurityAlgorithmConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_SecurityAlgorithmConfig_tags_1,
	sizeof(asn_DEF_SecurityAlgorithmConfig_tags_1)
		/sizeof(asn_DEF_SecurityAlgorithmConfig_tags_1[0]), /* 1 */
	asn_DEF_SecurityAlgorithmConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_SecurityAlgorithmConfig_tags_1)
		/sizeof(asn_DEF_SecurityAlgorithmConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SecurityAlgorithmConfig_1,
	2,	/* Elements count */
	&asn_SPC_SecurityAlgorithmConfig_specs_1	/* Additional specs */
};

