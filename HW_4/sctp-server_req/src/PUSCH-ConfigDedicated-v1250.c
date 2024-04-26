/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "PUSCH-ConfigDedicated-v1250.h"

static int
memb_betaOffset_ACK_Index_MC_SubframeSet2_r12_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
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
memb_betaOffset_RI_Index_MC_SubframeSet2_r12_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
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
memb_betaOffset_CQI_Index_MC_SubframeSet2_r12_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
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
memb_betaOffset_ACK_Index_SubframeSet2_r12_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
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
memb_betaOffset_RI_Index_SubframeSet2_r12_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
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
memb_betaOffset_CQI_Index_SubframeSet2_r12_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_betaOffset_ACK_Index_MC_SubframeSet2_r12_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_betaOffset_RI_Index_MC_SubframeSet2_r12_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_betaOffset_CQI_Index_MC_SubframeSet2_r12_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_betaOffset_ACK_Index_SubframeSet2_r12_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_betaOffset_RI_Index_SubframeSet2_r12_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_betaOffset_CQI_Index_SubframeSet2_r12_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_uciOnPUSCH_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_betaOffsetMC_r12_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUSCH_ConfigDedicated_v1250__uciOnPUSCH__setup__betaOffsetMC_r12, betaOffset_ACK_Index_MC_SubframeSet2_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_betaOffset_ACK_Index_MC_SubframeSet2_r12_constr_9,  memb_betaOffset_ACK_Index_MC_SubframeSet2_r12_constraint_8 },
		0, 0, /* No default value */
		"betaOffset-ACK-Index-MC-SubframeSet2-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUSCH_ConfigDedicated_v1250__uciOnPUSCH__setup__betaOffsetMC_r12, betaOffset_RI_Index_MC_SubframeSet2_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_betaOffset_RI_Index_MC_SubframeSet2_r12_constr_10,  memb_betaOffset_RI_Index_MC_SubframeSet2_r12_constraint_8 },
		0, 0, /* No default value */
		"betaOffset-RI-Index-MC-SubframeSet2-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUSCH_ConfigDedicated_v1250__uciOnPUSCH__setup__betaOffsetMC_r12, betaOffset_CQI_Index_MC_SubframeSet2_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_betaOffset_CQI_Index_MC_SubframeSet2_r12_constr_11,  memb_betaOffset_CQI_Index_MC_SubframeSet2_r12_constraint_8 },
		0, 0, /* No default value */
		"betaOffset-CQI-Index-MC-SubframeSet2-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_betaOffsetMC_r12_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_betaOffsetMC_r12_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* betaOffset-ACK-Index-MC-SubframeSet2-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* betaOffset-RI-Index-MC-SubframeSet2-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* betaOffset-CQI-Index-MC-SubframeSet2-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_betaOffsetMC_r12_specs_8 = {
	sizeof(struct PUSCH_ConfigDedicated_v1250__uciOnPUSCH__setup__betaOffsetMC_r12),
	offsetof(struct PUSCH_ConfigDedicated_v1250__uciOnPUSCH__setup__betaOffsetMC_r12, _asn_ctx),
	asn_MAP_betaOffsetMC_r12_tag2el_8,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_betaOffsetMC_r12_8 = {
	"betaOffsetMC-r12",
	"betaOffsetMC-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_betaOffsetMC_r12_tags_8,
	sizeof(asn_DEF_betaOffsetMC_r12_tags_8)
		/sizeof(asn_DEF_betaOffsetMC_r12_tags_8[0]) - 1, /* 1 */
	asn_DEF_betaOffsetMC_r12_tags_8,	/* Same as above */
	sizeof(asn_DEF_betaOffsetMC_r12_tags_8)
		/sizeof(asn_DEF_betaOffsetMC_r12_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_betaOffsetMC_r12_8,
	3,	/* Elements count */
	&asn_SPC_betaOffsetMC_r12_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUSCH_ConfigDedicated_v1250__uciOnPUSCH__setup, betaOffset_ACK_Index_SubframeSet2_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_betaOffset_ACK_Index_SubframeSet2_r12_constr_5,  memb_betaOffset_ACK_Index_SubframeSet2_r12_constraint_4 },
		0, 0, /* No default value */
		"betaOffset-ACK-Index-SubframeSet2-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUSCH_ConfigDedicated_v1250__uciOnPUSCH__setup, betaOffset_RI_Index_SubframeSet2_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_betaOffset_RI_Index_SubframeSet2_r12_constr_6,  memb_betaOffset_RI_Index_SubframeSet2_r12_constraint_4 },
		0, 0, /* No default value */
		"betaOffset-RI-Index-SubframeSet2-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUSCH_ConfigDedicated_v1250__uciOnPUSCH__setup, betaOffset_CQI_Index_SubframeSet2_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_betaOffset_CQI_Index_SubframeSet2_r12_constr_7,  memb_betaOffset_CQI_Index_SubframeSet2_r12_constraint_4 },
		0, 0, /* No default value */
		"betaOffset-CQI-Index-SubframeSet2-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct PUSCH_ConfigDedicated_v1250__uciOnPUSCH__setup, betaOffsetMC_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_betaOffsetMC_r12_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"betaOffsetMC-r12"
		},
};
static const int asn_MAP_setup_oms_4[] = { 3 };
static const ber_tlv_tag_t asn_DEF_setup_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* betaOffset-ACK-Index-SubframeSet2-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* betaOffset-RI-Index-SubframeSet2-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* betaOffset-CQI-Index-SubframeSet2-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* betaOffsetMC-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_4 = {
	sizeof(struct PUSCH_ConfigDedicated_v1250__uciOnPUSCH__setup),
	offsetof(struct PUSCH_ConfigDedicated_v1250__uciOnPUSCH__setup, _asn_ctx),
	asn_MAP_setup_tag2el_4,
	4,	/* Count of tags in the map */
	asn_MAP_setup_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_4 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_4,
	sizeof(asn_DEF_setup_tags_4)
		/sizeof(asn_DEF_setup_tags_4[0]) - 1, /* 1 */
	asn_DEF_setup_tags_4,	/* Same as above */
	sizeof(asn_DEF_setup_tags_4)
		/sizeof(asn_DEF_setup_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_4,
	4,	/* Elements count */
	&asn_SPC_setup_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_uciOnPUSCH_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUSCH_ConfigDedicated_v1250__uciOnPUSCH, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUSCH_ConfigDedicated_v1250__uciOnPUSCH, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_uciOnPUSCH_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_uciOnPUSCH_specs_2 = {
	sizeof(struct PUSCH_ConfigDedicated_v1250__uciOnPUSCH),
	offsetof(struct PUSCH_ConfigDedicated_v1250__uciOnPUSCH, _asn_ctx),
	offsetof(struct PUSCH_ConfigDedicated_v1250__uciOnPUSCH, present),
	sizeof(((struct PUSCH_ConfigDedicated_v1250__uciOnPUSCH *)0)->present),
	asn_MAP_uciOnPUSCH_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_uciOnPUSCH_2 = {
	"uciOnPUSCH",
	"uciOnPUSCH",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_uciOnPUSCH_constr_2, CHOICE_constraint },
	asn_MBR_uciOnPUSCH_2,
	2,	/* Elements count */
	&asn_SPC_uciOnPUSCH_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PUSCH_ConfigDedicated_v1250_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUSCH_ConfigDedicated_v1250, uciOnPUSCH),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_uciOnPUSCH_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uciOnPUSCH"
		},
};
static const ber_tlv_tag_t asn_DEF_PUSCH_ConfigDedicated_v1250_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PUSCH_ConfigDedicated_v1250_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* uciOnPUSCH */
};
asn_SEQUENCE_specifics_t asn_SPC_PUSCH_ConfigDedicated_v1250_specs_1 = {
	sizeof(struct PUSCH_ConfigDedicated_v1250),
	offsetof(struct PUSCH_ConfigDedicated_v1250, _asn_ctx),
	asn_MAP_PUSCH_ConfigDedicated_v1250_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PUSCH_ConfigDedicated_v1250 = {
	"PUSCH-ConfigDedicated-v1250",
	"PUSCH-ConfigDedicated-v1250",
	&asn_OP_SEQUENCE,
	asn_DEF_PUSCH_ConfigDedicated_v1250_tags_1,
	sizeof(asn_DEF_PUSCH_ConfigDedicated_v1250_tags_1)
		/sizeof(asn_DEF_PUSCH_ConfigDedicated_v1250_tags_1[0]), /* 1 */
	asn_DEF_PUSCH_ConfigDedicated_v1250_tags_1,	/* Same as above */
	sizeof(asn_DEF_PUSCH_ConfigDedicated_v1250_tags_1)
		/sizeof(asn_DEF_PUSCH_ConfigDedicated_v1250_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PUSCH_ConfigDedicated_v1250_1,
	1,	/* Elements count */
	&asn_SPC_PUSCH_ConfigDedicated_v1250_specs_1	/* Additional specs */
};

