/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SL-PreconfigDiscPool-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_numRetx_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_numRepetition_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 50)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_discPeriod_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_txProbability_r13_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_numRetx_r13_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_numRepetition_r13_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  50 }	/* (1..50) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_discPeriod_r13_value2enum_3[] = {
	{ 0,	3,	"rf4" },
	{ 1,	3,	"rf6" },
	{ 2,	3,	"rf7" },
	{ 3,	3,	"rf8" },
	{ 4,	4,	"rf12" },
	{ 5,	4,	"rf14" },
	{ 6,	4,	"rf16" },
	{ 7,	4,	"rf24" },
	{ 8,	4,	"rf28" },
	{ 9,	4,	"rf32" },
	{ 10,	4,	"rf64" },
	{ 11,	5,	"rf128" },
	{ 12,	5,	"rf256" },
	{ 13,	5,	"rf512" },
	{ 14,	6,	"rf1024" },
	{ 15,	5,	"spare" }
};
static const unsigned int asn_MAP_discPeriod_r13_enum2value_3[] = {
	14,	/* rf1024(14) */
	4,	/* rf12(4) */
	11,	/* rf128(11) */
	5,	/* rf14(5) */
	6,	/* rf16(6) */
	7,	/* rf24(7) */
	12,	/* rf256(12) */
	8,	/* rf28(8) */
	9,	/* rf32(9) */
	0,	/* rf4(0) */
	13,	/* rf512(13) */
	1,	/* rf6(1) */
	10,	/* rf64(10) */
	2,	/* rf7(2) */
	3,	/* rf8(3) */
	15	/* spare(15) */
};
static const asn_INTEGER_specifics_t asn_SPC_discPeriod_r13_specs_3 = {
	asn_MAP_discPeriod_r13_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_discPeriod_r13_enum2value_3,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_discPeriod_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_discPeriod_r13_3 = {
	"discPeriod-r13",
	"discPeriod-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_discPeriod_r13_tags_3,
	sizeof(asn_DEF_discPeriod_r13_tags_3)
		/sizeof(asn_DEF_discPeriod_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_discPeriod_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_discPeriod_r13_tags_3)
		/sizeof(asn_DEF_discPeriod_r13_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_discPeriod_r13_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_discPeriod_r13_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_txProbability_r13_value2enum_25[] = {
	{ 0,	3,	"p25" },
	{ 1,	3,	"p50" },
	{ 2,	3,	"p75" },
	{ 3,	4,	"p100" }
};
static const unsigned int asn_MAP_txProbability_r13_enum2value_25[] = {
	3,	/* p100(3) */
	0,	/* p25(0) */
	1,	/* p50(1) */
	2	/* p75(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_txProbability_r13_specs_25 = {
	asn_MAP_txProbability_r13_value2enum_25,	/* "tag" => N; sorted by tag */
	asn_MAP_txProbability_r13_enum2value_25,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_txProbability_r13_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_txProbability_r13_25 = {
	"txProbability-r13",
	"txProbability-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_txProbability_r13_tags_25,
	sizeof(asn_DEF_txProbability_r13_tags_25)
		/sizeof(asn_DEF_txProbability_r13_tags_25[0]) - 1, /* 1 */
	asn_DEF_txProbability_r13_tags_25,	/* Same as above */
	sizeof(asn_DEF_txProbability_r13_tags_25)
		/sizeof(asn_DEF_txProbability_r13_tags_25[0]), /* 2 */
	{ 0, &asn_PER_type_txProbability_r13_constr_25, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_txProbability_r13_specs_25	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_txParameters_r13_23[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigDiscPool_r13__txParameters_r13, txParametersGeneral_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P0_SL_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"txParametersGeneral-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigDiscPool_r13__txParameters_r13, txProbability_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_txProbability_r13_25,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"txProbability-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_txParameters_r13_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_txParameters_r13_tag2el_23[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* txParametersGeneral-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* txProbability-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_txParameters_r13_specs_23 = {
	sizeof(struct SL_PreconfigDiscPool_r13__txParameters_r13),
	offsetof(struct SL_PreconfigDiscPool_r13__txParameters_r13, _asn_ctx),
	asn_MAP_txParameters_r13_tag2el_23,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_txParameters_r13_23 = {
	"txParameters-r13",
	"txParameters-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_txParameters_r13_tags_23,
	sizeof(asn_DEF_txParameters_r13_tags_23)
		/sizeof(asn_DEF_txParameters_r13_tags_23[0]) - 1, /* 1 */
	asn_DEF_txParameters_r13_tags_23,	/* Same as above */
	sizeof(asn_DEF_txParameters_r13_tags_23)
		/sizeof(asn_DEF_txParameters_r13_tags_23[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_txParameters_r13_23,
	2,	/* Elements count */
	&asn_SPC_txParameters_r13_specs_23	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_PreconfigDiscPool_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigDiscPool_r13, cp_Len_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CP_Len_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cp-Len-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigDiscPool_r13, discPeriod_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_discPeriod_r13_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discPeriod-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigDiscPool_r13, numRetx_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_numRetx_r13_constr_20,  memb_numRetx_r13_constraint_1 },
		0, 0, /* No default value */
		"numRetx-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigDiscPool_r13, numRepetition_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_numRepetition_r13_constr_21,  memb_numRepetition_r13_constraint_1 },
		0, 0, /* No default value */
		"numRepetition-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigDiscPool_r13, tf_ResourceConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_TF_ResourceConfig_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tf-ResourceConfig-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_PreconfigDiscPool_r13, txParameters_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_txParameters_r13_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"txParameters-r13"
		},
};
static const int asn_MAP_SL_PreconfigDiscPool_r13_oms_1[] = { 5 };
static const ber_tlv_tag_t asn_DEF_SL_PreconfigDiscPool_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_PreconfigDiscPool_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cp-Len-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* discPeriod-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* numRetx-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* numRepetition-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* tf-ResourceConfig-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* txParameters-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_PreconfigDiscPool_r13_specs_1 = {
	sizeof(struct SL_PreconfigDiscPool_r13),
	offsetof(struct SL_PreconfigDiscPool_r13, _asn_ctx),
	asn_MAP_SL_PreconfigDiscPool_r13_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_SL_PreconfigDiscPool_r13_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_PreconfigDiscPool_r13 = {
	"SL-PreconfigDiscPool-r13",
	"SL-PreconfigDiscPool-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_PreconfigDiscPool_r13_tags_1,
	sizeof(asn_DEF_SL_PreconfigDiscPool_r13_tags_1)
		/sizeof(asn_DEF_SL_PreconfigDiscPool_r13_tags_1[0]), /* 1 */
	asn_DEF_SL_PreconfigDiscPool_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_PreconfigDiscPool_r13_tags_1)
		/sizeof(asn_DEF_SL_PreconfigDiscPool_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_PreconfigDiscPool_r13_1,
	6,	/* Elements count */
	&asn_SPC_SL_PreconfigDiscPool_r13_specs_1	/* Additional specs */
};

