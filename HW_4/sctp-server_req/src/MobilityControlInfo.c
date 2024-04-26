/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "MobilityControlInfo.h"

#include "CarrierFreqEUTRA.h"
#include "CarrierBandwidthEUTRA.h"
#include "RACH-ConfigDedicated.h"
#include "CarrierFreqEUTRA-v9e0.h"
#include "MobilityControlInfoV2X-r14.h"
#include "RACH-Skip-r14.h"
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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_schedulingInfoSIB1_BR_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_t304_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_drb_ContinueROHC_r11_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_handoverWithoutWT_Change_r14_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_makeBeforeBreak_r14_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_sameSFN_Indication_r14_constr_29 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_schedulingInfoSIB1_BR_r14_constr_32 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_t304_value2enum_6[] = {
	{ 0,	4,	"ms50" },
	{ 1,	5,	"ms100" },
	{ 2,	5,	"ms150" },
	{ 3,	5,	"ms200" },
	{ 4,	5,	"ms500" },
	{ 5,	6,	"ms1000" },
	{ 6,	6,	"ms2000" },
	{ 7,	13,	"ms10000-v1310" }
};
static const unsigned int asn_MAP_t304_enum2value_6[] = {
	1,	/* ms100(1) */
	5,	/* ms1000(5) */
	7,	/* ms10000-v1310(7) */
	2,	/* ms150(2) */
	3,	/* ms200(3) */
	6,	/* ms2000(6) */
	0,	/* ms50(0) */
	4	/* ms500(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_t304_specs_6 = {
	asn_MAP_t304_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_t304_enum2value_6,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_t304_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t304_6 = {
	"t304",
	"t304",
	&asn_OP_NativeEnumerated,
	asn_DEF_t304_tags_6,
	sizeof(asn_DEF_t304_tags_6)
		/sizeof(asn_DEF_t304_tags_6[0]) - 1, /* 1 */
	asn_DEF_t304_tags_6,	/* Same as above */
	sizeof(asn_DEF_t304_tags_6)
		/sizeof(asn_DEF_t304_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_t304_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t304_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_drb_ContinueROHC_r11_value2enum_20[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_drb_ContinueROHC_r11_enum2value_20[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_drb_ContinueROHC_r11_specs_20 = {
	asn_MAP_drb_ContinueROHC_r11_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_drb_ContinueROHC_r11_enum2value_20,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_drb_ContinueROHC_r11_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drb_ContinueROHC_r11_20 = {
	"drb-ContinueROHC-r11",
	"drb-ContinueROHC-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_drb_ContinueROHC_r11_tags_20,
	sizeof(asn_DEF_drb_ContinueROHC_r11_tags_20)
		/sizeof(asn_DEF_drb_ContinueROHC_r11_tags_20[0]) - 1, /* 1 */
	asn_DEF_drb_ContinueROHC_r11_tags_20,	/* Same as above */
	sizeof(asn_DEF_drb_ContinueROHC_r11_tags_20)
		/sizeof(asn_DEF_drb_ContinueROHC_r11_tags_20[0]), /* 2 */
	{ 0, &asn_PER_type_drb_ContinueROHC_r11_constr_20, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drb_ContinueROHC_r11_specs_20	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_handoverWithoutWT_Change_r14_value2enum_23[] = {
	{ 0,	14,	"keepLWA-Config" },
	{ 1,	13,	"sendEndMarker" }
};
static const unsigned int asn_MAP_handoverWithoutWT_Change_r14_enum2value_23[] = {
	0,	/* keepLWA-Config(0) */
	1	/* sendEndMarker(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_handoverWithoutWT_Change_r14_specs_23 = {
	asn_MAP_handoverWithoutWT_Change_r14_value2enum_23,	/* "tag" => N; sorted by tag */
	asn_MAP_handoverWithoutWT_Change_r14_enum2value_23,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_handoverWithoutWT_Change_r14_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_handoverWithoutWT_Change_r14_23 = {
	"handoverWithoutWT-Change-r14",
	"handoverWithoutWT-Change-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_handoverWithoutWT_Change_r14_tags_23,
	sizeof(asn_DEF_handoverWithoutWT_Change_r14_tags_23)
		/sizeof(asn_DEF_handoverWithoutWT_Change_r14_tags_23[0]) - 1, /* 1 */
	asn_DEF_handoverWithoutWT_Change_r14_tags_23,	/* Same as above */
	sizeof(asn_DEF_handoverWithoutWT_Change_r14_tags_23)
		/sizeof(asn_DEF_handoverWithoutWT_Change_r14_tags_23[0]), /* 2 */
	{ 0, &asn_PER_type_handoverWithoutWT_Change_r14_constr_23, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_handoverWithoutWT_Change_r14_specs_23	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_makeBeforeBreak_r14_value2enum_26[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_makeBeforeBreak_r14_enum2value_26[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_makeBeforeBreak_r14_specs_26 = {
	asn_MAP_makeBeforeBreak_r14_value2enum_26,	/* "tag" => N; sorted by tag */
	asn_MAP_makeBeforeBreak_r14_enum2value_26,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_makeBeforeBreak_r14_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_makeBeforeBreak_r14_26 = {
	"makeBeforeBreak-r14",
	"makeBeforeBreak-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_makeBeforeBreak_r14_tags_26,
	sizeof(asn_DEF_makeBeforeBreak_r14_tags_26)
		/sizeof(asn_DEF_makeBeforeBreak_r14_tags_26[0]) - 1, /* 1 */
	asn_DEF_makeBeforeBreak_r14_tags_26,	/* Same as above */
	sizeof(asn_DEF_makeBeforeBreak_r14_tags_26)
		/sizeof(asn_DEF_makeBeforeBreak_r14_tags_26[0]), /* 2 */
	{ 0, &asn_PER_type_makeBeforeBreak_r14_constr_26, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_makeBeforeBreak_r14_specs_26	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sameSFN_Indication_r14_value2enum_29[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_sameSFN_Indication_r14_enum2value_29[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_sameSFN_Indication_r14_specs_29 = {
	asn_MAP_sameSFN_Indication_r14_value2enum_29,	/* "tag" => N; sorted by tag */
	asn_MAP_sameSFN_Indication_r14_enum2value_29,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sameSFN_Indication_r14_tags_29[] = {
	(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sameSFN_Indication_r14_29 = {
	"sameSFN-Indication-r14",
	"sameSFN-Indication-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_sameSFN_Indication_r14_tags_29,
	sizeof(asn_DEF_sameSFN_Indication_r14_tags_29)
		/sizeof(asn_DEF_sameSFN_Indication_r14_tags_29[0]) - 1, /* 1 */
	asn_DEF_sameSFN_Indication_r14_tags_29,	/* Same as above */
	sizeof(asn_DEF_sameSFN_Indication_r14_tags_29)
		/sizeof(asn_DEF_sameSFN_Indication_r14_tags_29[0]), /* 2 */
	{ 0, &asn_PER_type_sameSFN_Indication_r14_constr_29, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sameSFN_Indication_r14_specs_29	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MobilityControlInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MobilityControlInfo, targetPhysCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targetPhysCellId"
		},
	{ ATF_POINTER, 3, offsetof(struct MobilityControlInfo, carrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq"
		},
	{ ATF_POINTER, 2, offsetof(struct MobilityControlInfo, carrierBandwidth),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierBandwidthEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierBandwidth"
		},
	{ ATF_POINTER, 1, offsetof(struct MobilityControlInfo, additionalSpectrumEmission),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSpectrumEmission,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalSpectrumEmission"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MobilityControlInfo, t304),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t304_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t304"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MobilityControlInfo, newUE_Identity),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"newUE-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MobilityControlInfo, radioResourceConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigCommon"
		},
	{ ATF_POINTER, 10, offsetof(struct MobilityControlInfo, rach_ConfigDedicated),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RACH_ConfigDedicated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach-ConfigDedicated"
		},
	{ ATF_POINTER, 9, offsetof(struct MobilityControlInfo, carrierFreq_v9e0),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqEUTRA_v9e0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-v9e0"
		},
	{ ATF_POINTER, 8, offsetof(struct MobilityControlInfo, drb_ContinueROHC_r11),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drb_ContinueROHC_r11_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-ContinueROHC-r11"
		},
	{ ATF_POINTER, 7, offsetof(struct MobilityControlInfo, mobilityControlInfoV2X_r14),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MobilityControlInfoV2X_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mobilityControlInfoV2X-r14"
		},
	{ ATF_POINTER, 6, offsetof(struct MobilityControlInfo, handoverWithoutWT_Change_r14),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_handoverWithoutWT_Change_r14_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"handoverWithoutWT-Change-r14"
		},
	{ ATF_POINTER, 5, offsetof(struct MobilityControlInfo, makeBeforeBreak_r14),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_makeBeforeBreak_r14_26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"makeBeforeBreak-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct MobilityControlInfo, rach_Skip_r14),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RACH_Skip_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach-Skip-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct MobilityControlInfo, sameSFN_Indication_r14),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sameSFN_Indication_r14_29,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sameSFN-Indication-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct MobilityControlInfo, mib_RepetitionStatus_r14),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mib-RepetitionStatus-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct MobilityControlInfo, schedulingInfoSIB1_BR_r14),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_schedulingInfoSIB1_BR_r14_constr_32,  memb_schedulingInfoSIB1_BR_r14_constraint_1 },
		0, 0, /* No default value */
		"schedulingInfoSIB1-BR-r14"
		},
};
static const int asn_MAP_MobilityControlInfo_oms_1[] = { 1, 2, 3, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
static const ber_tlv_tag_t asn_DEF_MobilityControlInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MobilityControlInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* targetPhysCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* carrierFreq */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* carrierBandwidth */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* additionalSpectrumEmission */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* t304 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* newUE-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* radioResourceConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* rach-ConfigDedicated */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* carrierFreq-v9e0 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* drb-ContinueROHC-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* mobilityControlInfoV2X-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* handoverWithoutWT-Change-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* makeBeforeBreak-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* rach-Skip-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* sameSFN-Indication-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* mib-RepetitionStatus-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 } /* schedulingInfoSIB1-BR-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_MobilityControlInfo_specs_1 = {
	sizeof(struct MobilityControlInfo),
	offsetof(struct MobilityControlInfo, _asn_ctx),
	asn_MAP_MobilityControlInfo_tag2el_1,
	17,	/* Count of tags in the map */
	asn_MAP_MobilityControlInfo_oms_1,	/* Optional members */
	4, 9,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MobilityControlInfo = {
	"MobilityControlInfo",
	"MobilityControlInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_MobilityControlInfo_tags_1,
	sizeof(asn_DEF_MobilityControlInfo_tags_1)
		/sizeof(asn_DEF_MobilityControlInfo_tags_1[0]), /* 1 */
	asn_DEF_MobilityControlInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_MobilityControlInfo_tags_1)
		/sizeof(asn_DEF_MobilityControlInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MobilityControlInfo_1,
	17,	/* Elements count */
	&asn_SPC_MobilityControlInfo_specs_1	/* Additional specs */
};

