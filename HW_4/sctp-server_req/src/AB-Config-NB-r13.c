/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "AB-Config-NB-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_ab_BarringBitmap_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 10)) {
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
memb_ab_BarringForSpecialAC_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 5)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_ab_Category_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ab_BarringForExceptionData_r13_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ab_BarringBitmap_r13_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ab_BarringForSpecialAC_r13_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  5,  5 }	/* (SIZE(5..5)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ab_Category_r13_value2enum_2[] = {
	{ 0,	1,	"a" },
	{ 1,	1,	"b" },
	{ 2,	1,	"c" }
};
static const unsigned int asn_MAP_ab_Category_r13_enum2value_2[] = {
	0,	/* a(0) */
	1,	/* b(1) */
	2	/* c(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_ab_Category_r13_specs_2 = {
	asn_MAP_ab_Category_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_ab_Category_r13_enum2value_2,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ab_Category_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ab_Category_r13_2 = {
	"ab-Category-r13",
	"ab-Category-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_ab_Category_r13_tags_2,
	sizeof(asn_DEF_ab_Category_r13_tags_2)
		/sizeof(asn_DEF_ab_Category_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_ab_Category_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_ab_Category_r13_tags_2)
		/sizeof(asn_DEF_ab_Category_r13_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_ab_Category_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ab_Category_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ab_BarringForExceptionData_r13_value2enum_7[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_ab_BarringForExceptionData_r13_enum2value_7[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ab_BarringForExceptionData_r13_specs_7 = {
	asn_MAP_ab_BarringForExceptionData_r13_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_ab_BarringForExceptionData_r13_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ab_BarringForExceptionData_r13_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ab_BarringForExceptionData_r13_7 = {
	"ab-BarringForExceptionData-r13",
	"ab-BarringForExceptionData-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_ab_BarringForExceptionData_r13_tags_7,
	sizeof(asn_DEF_ab_BarringForExceptionData_r13_tags_7)
		/sizeof(asn_DEF_ab_BarringForExceptionData_r13_tags_7[0]) - 1, /* 1 */
	asn_DEF_ab_BarringForExceptionData_r13_tags_7,	/* Same as above */
	sizeof(asn_DEF_ab_BarringForExceptionData_r13_tags_7)
		/sizeof(asn_DEF_ab_BarringForExceptionData_r13_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_ab_BarringForExceptionData_r13_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ab_BarringForExceptionData_r13_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_AB_Config_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AB_Config_NB_r13, ab_Category_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ab_Category_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ab-Category-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AB_Config_NB_r13, ab_BarringBitmap_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_ab_BarringBitmap_r13_constr_6,  memb_ab_BarringBitmap_r13_constraint_1 },
		0, 0, /* No default value */
		"ab-BarringBitmap-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct AB_Config_NB_r13, ab_BarringForExceptionData_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ab_BarringForExceptionData_r13_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ab-BarringForExceptionData-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AB_Config_NB_r13, ab_BarringForSpecialAC_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_ab_BarringForSpecialAC_r13_constr_9,  memb_ab_BarringForSpecialAC_r13_constraint_1 },
		0, 0, /* No default value */
		"ab-BarringForSpecialAC-r13"
		},
};
static const int asn_MAP_AB_Config_NB_r13_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_AB_Config_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AB_Config_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ab-Category-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ab-BarringBitmap-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ab-BarringForExceptionData-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ab-BarringForSpecialAC-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_AB_Config_NB_r13_specs_1 = {
	sizeof(struct AB_Config_NB_r13),
	offsetof(struct AB_Config_NB_r13, _asn_ctx),
	asn_MAP_AB_Config_NB_r13_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_AB_Config_NB_r13_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AB_Config_NB_r13 = {
	"AB-Config-NB-r13",
	"AB-Config-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_AB_Config_NB_r13_tags_1,
	sizeof(asn_DEF_AB_Config_NB_r13_tags_1)
		/sizeof(asn_DEF_AB_Config_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_AB_Config_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_AB_Config_NB_r13_tags_1)
		/sizeof(asn_DEF_AB_Config_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AB_Config_NB_r13_1,
	4,	/* Elements count */
	&asn_SPC_AB_Config_NB_r13_specs_1	/* Additional specs */
};

