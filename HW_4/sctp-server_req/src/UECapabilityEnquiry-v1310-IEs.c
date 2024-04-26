/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "UECapabilityEnquiry-v1310-IEs.h"

#include "UECapabilityEnquiry-v1430-IEs.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_requestedMaxCCsDL_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 32)) {
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
memb_requestedMaxCCsUL_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_requestReducedFormat_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_requestSkipFallbackComb_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_requestReducedIntNonContComb_r13_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_requestedMaxCCsDL_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  2,  32 }	/* (2..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_requestedMaxCCsUL_r13_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  2,  32 }	/* (2..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_requestReducedFormat_r13_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_requestReducedFormat_r13_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_requestReducedFormat_r13_specs_2 = {
	asn_MAP_requestReducedFormat_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_requestReducedFormat_r13_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_requestReducedFormat_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_requestReducedFormat_r13_2 = {
	"requestReducedFormat-r13",
	"requestReducedFormat-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_requestReducedFormat_r13_tags_2,
	sizeof(asn_DEF_requestReducedFormat_r13_tags_2)
		/sizeof(asn_DEF_requestReducedFormat_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_requestReducedFormat_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_requestReducedFormat_r13_tags_2)
		/sizeof(asn_DEF_requestReducedFormat_r13_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_requestReducedFormat_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_requestReducedFormat_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_requestSkipFallbackComb_r13_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_requestSkipFallbackComb_r13_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_requestSkipFallbackComb_r13_specs_4 = {
	asn_MAP_requestSkipFallbackComb_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_requestSkipFallbackComb_r13_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_requestSkipFallbackComb_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_requestSkipFallbackComb_r13_4 = {
	"requestSkipFallbackComb-r13",
	"requestSkipFallbackComb-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_requestSkipFallbackComb_r13_tags_4,
	sizeof(asn_DEF_requestSkipFallbackComb_r13_tags_4)
		/sizeof(asn_DEF_requestSkipFallbackComb_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_requestSkipFallbackComb_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_requestSkipFallbackComb_r13_tags_4)
		/sizeof(asn_DEF_requestSkipFallbackComb_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_requestSkipFallbackComb_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_requestSkipFallbackComb_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_requestReducedIntNonContComb_r13_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_requestReducedIntNonContComb_r13_enum2value_8[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_requestReducedIntNonContComb_r13_specs_8 = {
	asn_MAP_requestReducedIntNonContComb_r13_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_requestReducedIntNonContComb_r13_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_requestReducedIntNonContComb_r13_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_requestReducedIntNonContComb_r13_8 = {
	"requestReducedIntNonContComb-r13",
	"requestReducedIntNonContComb-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_requestReducedIntNonContComb_r13_tags_8,
	sizeof(asn_DEF_requestReducedIntNonContComb_r13_tags_8)
		/sizeof(asn_DEF_requestReducedIntNonContComb_r13_tags_8[0]) - 1, /* 1 */
	asn_DEF_requestReducedIntNonContComb_r13_tags_8,	/* Same as above */
	sizeof(asn_DEF_requestReducedIntNonContComb_r13_tags_8)
		/sizeof(asn_DEF_requestReducedIntNonContComb_r13_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_requestReducedIntNonContComb_r13_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_requestReducedIntNonContComb_r13_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UECapabilityEnquiry_v1310_IEs_1[] = {
	{ ATF_POINTER, 6, offsetof(struct UECapabilityEnquiry_v1310_IEs, requestReducedFormat_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_requestReducedFormat_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"requestReducedFormat-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct UECapabilityEnquiry_v1310_IEs, requestSkipFallbackComb_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_requestSkipFallbackComb_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"requestSkipFallbackComb-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct UECapabilityEnquiry_v1310_IEs, requestedMaxCCsDL_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_requestedMaxCCsDL_r13_constr_6,  memb_requestedMaxCCsDL_r13_constraint_1 },
		0, 0, /* No default value */
		"requestedMaxCCsDL-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct UECapabilityEnquiry_v1310_IEs, requestedMaxCCsUL_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_requestedMaxCCsUL_r13_constr_7,  memb_requestedMaxCCsUL_r13_constraint_1 },
		0, 0, /* No default value */
		"requestedMaxCCsUL-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct UECapabilityEnquiry_v1310_IEs, requestReducedIntNonContComb_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_requestReducedIntNonContComb_r13_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"requestReducedIntNonContComb-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct UECapabilityEnquiry_v1310_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UECapabilityEnquiry_v1430_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UECapabilityEnquiry_v1310_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_UECapabilityEnquiry_v1310_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UECapabilityEnquiry_v1310_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* requestReducedFormat-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* requestSkipFallbackComb-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* requestedMaxCCsDL-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* requestedMaxCCsUL-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* requestReducedIntNonContComb-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UECapabilityEnquiry_v1310_IEs_specs_1 = {
	sizeof(struct UECapabilityEnquiry_v1310_IEs),
	offsetof(struct UECapabilityEnquiry_v1310_IEs, _asn_ctx),
	asn_MAP_UECapabilityEnquiry_v1310_IEs_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_UECapabilityEnquiry_v1310_IEs_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UECapabilityEnquiry_v1310_IEs = {
	"UECapabilityEnquiry-v1310-IEs",
	"UECapabilityEnquiry-v1310-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UECapabilityEnquiry_v1310_IEs_tags_1,
	sizeof(asn_DEF_UECapabilityEnquiry_v1310_IEs_tags_1)
		/sizeof(asn_DEF_UECapabilityEnquiry_v1310_IEs_tags_1[0]), /* 1 */
	asn_DEF_UECapabilityEnquiry_v1310_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UECapabilityEnquiry_v1310_IEs_tags_1)
		/sizeof(asn_DEF_UECapabilityEnquiry_v1310_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UECapabilityEnquiry_v1310_IEs_1,
	6,	/* Elements count */
	&asn_SPC_UECapabilityEnquiry_v1310_IEs_specs_1	/* Additional specs */
};

