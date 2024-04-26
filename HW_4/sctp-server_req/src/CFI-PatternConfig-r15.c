/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CFI-PatternConfig-r15.h"

static int
memb_NativeInteger_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
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
memb_NativeInteger_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 3)) {
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
memb_cfi_PatternSubframe_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size == 10)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_cfi_PatternSlotSubslot_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size == 10)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_Member_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_cfi_PatternSubframe_r15_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_Member_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (1..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_cfi_PatternSlotSubslot_r15_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cfi_PatternSubframe_r15_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cfi_PatternSlotSubslot_r15_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_cfi_PatternSubframe_r15_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_Member_constr_3,  memb_NativeInteger_constraint_2 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_cfi_PatternSubframe_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_cfi_PatternSubframe_r15_specs_2 = {
	sizeof(struct CFI_PatternConfig_r15__cfi_PatternSubframe_r15),
	offsetof(struct CFI_PatternConfig_r15__cfi_PatternSubframe_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cfi_PatternSubframe_r15_2 = {
	"cfi-PatternSubframe-r15",
	"cfi-PatternSubframe-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_cfi_PatternSubframe_r15_tags_2,
	sizeof(asn_DEF_cfi_PatternSubframe_r15_tags_2)
		/sizeof(asn_DEF_cfi_PatternSubframe_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_cfi_PatternSubframe_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_cfi_PatternSubframe_r15_tags_2)
		/sizeof(asn_DEF_cfi_PatternSubframe_r15_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_cfi_PatternSubframe_r15_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_cfi_PatternSubframe_r15_2,
	1,	/* Single element */
	&asn_SPC_cfi_PatternSubframe_r15_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cfi_PatternSlotSubslot_r15_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_Member_constr_5,  memb_NativeInteger_constraint_4 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_cfi_PatternSlotSubslot_r15_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_cfi_PatternSlotSubslot_r15_specs_4 = {
	sizeof(struct CFI_PatternConfig_r15__cfi_PatternSlotSubslot_r15),
	offsetof(struct CFI_PatternConfig_r15__cfi_PatternSlotSubslot_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cfi_PatternSlotSubslot_r15_4 = {
	"cfi-PatternSlotSubslot-r15",
	"cfi-PatternSlotSubslot-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_cfi_PatternSlotSubslot_r15_tags_4,
	sizeof(asn_DEF_cfi_PatternSlotSubslot_r15_tags_4)
		/sizeof(asn_DEF_cfi_PatternSlotSubslot_r15_tags_4[0]) - 1, /* 1 */
	asn_DEF_cfi_PatternSlotSubslot_r15_tags_4,	/* Same as above */
	sizeof(asn_DEF_cfi_PatternSlotSubslot_r15_tags_4)
		/sizeof(asn_DEF_cfi_PatternSlotSubslot_r15_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_cfi_PatternSlotSubslot_r15_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_cfi_PatternSlotSubslot_r15_4,
	1,	/* Single element */
	&asn_SPC_cfi_PatternSlotSubslot_r15_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CFI_PatternConfig_r15_1[] = {
	{ ATF_POINTER, 2, offsetof(struct CFI_PatternConfig_r15, cfi_PatternSubframe_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_cfi_PatternSubframe_r15_2,
		0,
		{ 0, &asn_PER_memb_cfi_PatternSubframe_r15_constr_2,  memb_cfi_PatternSubframe_r15_constraint_1 },
		0, 0, /* No default value */
		"cfi-PatternSubframe-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct CFI_PatternConfig_r15, cfi_PatternSlotSubslot_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_cfi_PatternSlotSubslot_r15_4,
		0,
		{ 0, &asn_PER_memb_cfi_PatternSlotSubslot_r15_constr_4,  memb_cfi_PatternSlotSubslot_r15_constraint_1 },
		0, 0, /* No default value */
		"cfi-PatternSlotSubslot-r15"
		},
};
static const int asn_MAP_CFI_PatternConfig_r15_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_CFI_PatternConfig_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CFI_PatternConfig_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cfi-PatternSubframe-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cfi-PatternSlotSubslot-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_CFI_PatternConfig_r15_specs_1 = {
	sizeof(struct CFI_PatternConfig_r15),
	offsetof(struct CFI_PatternConfig_r15, _asn_ctx),
	asn_MAP_CFI_PatternConfig_r15_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_CFI_PatternConfig_r15_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CFI_PatternConfig_r15 = {
	"CFI-PatternConfig-r15",
	"CFI-PatternConfig-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_CFI_PatternConfig_r15_tags_1,
	sizeof(asn_DEF_CFI_PatternConfig_r15_tags_1)
		/sizeof(asn_DEF_CFI_PatternConfig_r15_tags_1[0]), /* 1 */
	asn_DEF_CFI_PatternConfig_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_CFI_PatternConfig_r15_tags_1)
		/sizeof(asn_DEF_CFI_PatternConfig_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CFI_PatternConfig_r15_1,
	2,	/* Elements count */
	&asn_SPC_CFI_PatternConfig_r15_specs_1	/* Additional specs */
};

