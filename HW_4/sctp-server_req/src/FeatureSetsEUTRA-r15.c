/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "FeatureSetsEUTRA-r15.h"

#include "FeatureSetDL-r15.h"
#include "FeatureSetDL-PerCC-r15.h"
#include "FeatureSetUL-r15.h"
#include "FeatureSetUL-PerCC-r15.h"
#include "FeatureSetDL-v1550.h"
static int
memb_featureSetsDL_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 256)) {
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
memb_featureSetsDL_PerCC_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 32)) {
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
memb_featureSetsUL_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 256)) {
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
memb_featureSetsUL_PerCC_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 32)) {
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
memb_featureSetsDL_v1550_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 256)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_featureSetsDL_r15_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_featureSetsDL_PerCC_r15_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_featureSetsUL_r15_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_featureSetsUL_PerCC_r15_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_featureSetsDL_v1550_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_featureSetsDL_r15_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_featureSetsDL_PerCC_r15_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_featureSetsUL_r15_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_featureSetsUL_PerCC_r15_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_featureSetsDL_v1550_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_featureSetsDL_r15_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FeatureSetDL_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_featureSetsDL_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_featureSetsDL_r15_specs_2 = {
	sizeof(struct FeatureSetsEUTRA_r15__featureSetsDL_r15),
	offsetof(struct FeatureSetsEUTRA_r15__featureSetsDL_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_featureSetsDL_r15_2 = {
	"featureSetsDL-r15",
	"featureSetsDL-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_featureSetsDL_r15_tags_2,
	sizeof(asn_DEF_featureSetsDL_r15_tags_2)
		/sizeof(asn_DEF_featureSetsDL_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_featureSetsDL_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_featureSetsDL_r15_tags_2)
		/sizeof(asn_DEF_featureSetsDL_r15_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_featureSetsDL_r15_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_featureSetsDL_r15_2,
	1,	/* Single element */
	&asn_SPC_featureSetsDL_r15_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_featureSetsDL_PerCC_r15_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FeatureSetDL_PerCC_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_featureSetsDL_PerCC_r15_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_featureSetsDL_PerCC_r15_specs_4 = {
	sizeof(struct FeatureSetsEUTRA_r15__featureSetsDL_PerCC_r15),
	offsetof(struct FeatureSetsEUTRA_r15__featureSetsDL_PerCC_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_featureSetsDL_PerCC_r15_4 = {
	"featureSetsDL-PerCC-r15",
	"featureSetsDL-PerCC-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_featureSetsDL_PerCC_r15_tags_4,
	sizeof(asn_DEF_featureSetsDL_PerCC_r15_tags_4)
		/sizeof(asn_DEF_featureSetsDL_PerCC_r15_tags_4[0]) - 1, /* 1 */
	asn_DEF_featureSetsDL_PerCC_r15_tags_4,	/* Same as above */
	sizeof(asn_DEF_featureSetsDL_PerCC_r15_tags_4)
		/sizeof(asn_DEF_featureSetsDL_PerCC_r15_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_featureSetsDL_PerCC_r15_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_featureSetsDL_PerCC_r15_4,
	1,	/* Single element */
	&asn_SPC_featureSetsDL_PerCC_r15_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_featureSetsUL_r15_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FeatureSetUL_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_featureSetsUL_r15_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_featureSetsUL_r15_specs_6 = {
	sizeof(struct FeatureSetsEUTRA_r15__featureSetsUL_r15),
	offsetof(struct FeatureSetsEUTRA_r15__featureSetsUL_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_featureSetsUL_r15_6 = {
	"featureSetsUL-r15",
	"featureSetsUL-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_featureSetsUL_r15_tags_6,
	sizeof(asn_DEF_featureSetsUL_r15_tags_6)
		/sizeof(asn_DEF_featureSetsUL_r15_tags_6[0]) - 1, /* 1 */
	asn_DEF_featureSetsUL_r15_tags_6,	/* Same as above */
	sizeof(asn_DEF_featureSetsUL_r15_tags_6)
		/sizeof(asn_DEF_featureSetsUL_r15_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_featureSetsUL_r15_constr_6, SEQUENCE_OF_constraint },
	asn_MBR_featureSetsUL_r15_6,
	1,	/* Single element */
	&asn_SPC_featureSetsUL_r15_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_featureSetsUL_PerCC_r15_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FeatureSetUL_PerCC_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_featureSetsUL_PerCC_r15_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_featureSetsUL_PerCC_r15_specs_8 = {
	sizeof(struct FeatureSetsEUTRA_r15__featureSetsUL_PerCC_r15),
	offsetof(struct FeatureSetsEUTRA_r15__featureSetsUL_PerCC_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_featureSetsUL_PerCC_r15_8 = {
	"featureSetsUL-PerCC-r15",
	"featureSetsUL-PerCC-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_featureSetsUL_PerCC_r15_tags_8,
	sizeof(asn_DEF_featureSetsUL_PerCC_r15_tags_8)
		/sizeof(asn_DEF_featureSetsUL_PerCC_r15_tags_8[0]) - 1, /* 1 */
	asn_DEF_featureSetsUL_PerCC_r15_tags_8,	/* Same as above */
	sizeof(asn_DEF_featureSetsUL_PerCC_r15_tags_8)
		/sizeof(asn_DEF_featureSetsUL_PerCC_r15_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_featureSetsUL_PerCC_r15_constr_8, SEQUENCE_OF_constraint },
	asn_MBR_featureSetsUL_PerCC_r15_8,
	1,	/* Single element */
	&asn_SPC_featureSetsUL_PerCC_r15_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_featureSetsDL_v1550_11[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FeatureSetDL_v1550,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_featureSetsDL_v1550_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_featureSetsDL_v1550_specs_11 = {
	sizeof(struct FeatureSetsEUTRA_r15__featureSetsDL_v1550),
	offsetof(struct FeatureSetsEUTRA_r15__featureSetsDL_v1550, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_featureSetsDL_v1550_11 = {
	"featureSetsDL-v1550",
	"featureSetsDL-v1550",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_featureSetsDL_v1550_tags_11,
	sizeof(asn_DEF_featureSetsDL_v1550_tags_11)
		/sizeof(asn_DEF_featureSetsDL_v1550_tags_11[0]) - 1, /* 1 */
	asn_DEF_featureSetsDL_v1550_tags_11,	/* Same as above */
	sizeof(asn_DEF_featureSetsDL_v1550_tags_11)
		/sizeof(asn_DEF_featureSetsDL_v1550_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_featureSetsDL_v1550_constr_11, SEQUENCE_OF_constraint },
	asn_MBR_featureSetsDL_v1550_11,
	1,	/* Single element */
	&asn_SPC_featureSetsDL_v1550_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_FeatureSetsEUTRA_r15_1[] = {
	{ ATF_POINTER, 5, offsetof(struct FeatureSetsEUTRA_r15, featureSetsDL_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_featureSetsDL_r15_2,
		0,
		{ 0, &asn_PER_memb_featureSetsDL_r15_constr_2,  memb_featureSetsDL_r15_constraint_1 },
		0, 0, /* No default value */
		"featureSetsDL-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct FeatureSetsEUTRA_r15, featureSetsDL_PerCC_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_featureSetsDL_PerCC_r15_4,
		0,
		{ 0, &asn_PER_memb_featureSetsDL_PerCC_r15_constr_4,  memb_featureSetsDL_PerCC_r15_constraint_1 },
		0, 0, /* No default value */
		"featureSetsDL-PerCC-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct FeatureSetsEUTRA_r15, featureSetsUL_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_featureSetsUL_r15_6,
		0,
		{ 0, &asn_PER_memb_featureSetsUL_r15_constr_6,  memb_featureSetsUL_r15_constraint_1 },
		0, 0, /* No default value */
		"featureSetsUL-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct FeatureSetsEUTRA_r15, featureSetsUL_PerCC_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_featureSetsUL_PerCC_r15_8,
		0,
		{ 0, &asn_PER_memb_featureSetsUL_PerCC_r15_constr_8,  memb_featureSetsUL_PerCC_r15_constraint_1 },
		0, 0, /* No default value */
		"featureSetsUL-PerCC-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct FeatureSetsEUTRA_r15, featureSetsDL_v1550),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_featureSetsDL_v1550_11,
		0,
		{ 0, &asn_PER_memb_featureSetsDL_v1550_constr_11,  memb_featureSetsDL_v1550_constraint_1 },
		0, 0, /* No default value */
		"featureSetsDL-v1550"
		},
};
static const int asn_MAP_FeatureSetsEUTRA_r15_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_FeatureSetsEUTRA_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FeatureSetsEUTRA_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* featureSetsDL-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* featureSetsDL-PerCC-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* featureSetsUL-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* featureSetsUL-PerCC-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* featureSetsDL-v1550 */
};
asn_SEQUENCE_specifics_t asn_SPC_FeatureSetsEUTRA_r15_specs_1 = {
	sizeof(struct FeatureSetsEUTRA_r15),
	offsetof(struct FeatureSetsEUTRA_r15, _asn_ctx),
	asn_MAP_FeatureSetsEUTRA_r15_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_FeatureSetsEUTRA_r15_oms_1,	/* Optional members */
	4, 1,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FeatureSetsEUTRA_r15 = {
	"FeatureSetsEUTRA-r15",
	"FeatureSetsEUTRA-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_FeatureSetsEUTRA_r15_tags_1,
	sizeof(asn_DEF_FeatureSetsEUTRA_r15_tags_1)
		/sizeof(asn_DEF_FeatureSetsEUTRA_r15_tags_1[0]), /* 1 */
	asn_DEF_FeatureSetsEUTRA_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_FeatureSetsEUTRA_r15_tags_1)
		/sizeof(asn_DEF_FeatureSetsEUTRA_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_FeatureSetsEUTRA_r15_1,
	5,	/* Elements count */
	&asn_SPC_FeatureSetsEUTRA_r15_specs_1	/* Additional specs */
};

