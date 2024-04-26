/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "RadioResourceConfigCommonSCell-r10.h"

#include "RACH-ConfigCommonSCell-r11.h"
#include "PRACH-Config.h"
#include "TDD-Config-v1130.h"
#include "UplinkPowerControlCommonSCell-v1130.h"
#include "PUSCH-ConfigCommon-v1270.h"
#include "PUCCH-ConfigCommon.h"
#include "UplinkPowerControlCommonSCell-v1310.h"
#include "HighSpeedConfigSCell-r14.h"
#include "PRACH-Config-v1430.h"
#include "MBSFN-SubframeConfigList-v1430.h"
#include "UplinkPowerControlCommon-v1530.h"
#include "MBSFN-SubframeConfigList.h"
#include "TDD-Config.h"
#include "PRACH-ConfigSCell-r10.h"
#include "UplinkPowerControlCommonPUSCH-LessCell-v1430.h"
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
static asn_per_constraints_t asn_PER_type_dl_Bandwidth_r10_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ul_Bandwidth_r10_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ul_Bandwidth_r14_constr_46 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_harq_ReferenceConfig_r14_constr_59 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_soundingRS_FlexibleTiming_r14_constr_63 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_dl_Bandwidth_r10_value2enum_3[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n15" },
	{ 2,	3,	"n25" },
	{ 3,	3,	"n50" },
	{ 4,	3,	"n75" },
	{ 5,	4,	"n100" }
};
static const unsigned int asn_MAP_dl_Bandwidth_r10_enum2value_3[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4	/* n75(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_dl_Bandwidth_r10_specs_3 = {
	asn_MAP_dl_Bandwidth_r10_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_dl_Bandwidth_r10_enum2value_3,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dl_Bandwidth_r10_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_Bandwidth_r10_3 = {
	"dl-Bandwidth-r10",
	"dl-Bandwidth-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_dl_Bandwidth_r10_tags_3,
	sizeof(asn_DEF_dl_Bandwidth_r10_tags_3)
		/sizeof(asn_DEF_dl_Bandwidth_r10_tags_3[0]) - 1, /* 1 */
	asn_DEF_dl_Bandwidth_r10_tags_3,	/* Same as above */
	sizeof(asn_DEF_dl_Bandwidth_r10_tags_3)
		/sizeof(asn_DEF_dl_Bandwidth_r10_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_dl_Bandwidth_r10_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dl_Bandwidth_r10_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_nonUL_Configuration_r10_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10, dl_Bandwidth_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dl_Bandwidth_r10_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-Bandwidth-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10, antennaInfoCommon_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"antennaInfoCommon-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10, mbsfn_SubframeConfigList_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBSFN_SubframeConfigList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbsfn-SubframeConfigList-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10, phich_Config_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PHICH_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phich-Config-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10, pdsch_ConfigCommon_r10),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-ConfigCommon-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10, tdd_Config_r10),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Config-r10"
		},
};
static const int asn_MAP_nonUL_Configuration_r10_oms_2[] = { 2, 5 };
static const ber_tlv_tag_t asn_DEF_nonUL_Configuration_r10_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_nonUL_Configuration_r10_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-Bandwidth-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* antennaInfoCommon-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mbsfn-SubframeConfigList-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* phich-Config-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pdsch-ConfigCommon-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* tdd-Config-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_nonUL_Configuration_r10_specs_2 = {
	sizeof(struct RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10),
	offsetof(struct RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10, _asn_ctx),
	asn_MAP_nonUL_Configuration_r10_tag2el_2,
	6,	/* Count of tags in the map */
	asn_MAP_nonUL_Configuration_r10_oms_2,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonUL_Configuration_r10_2 = {
	"nonUL-Configuration-r10",
	"nonUL-Configuration-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_nonUL_Configuration_r10_tags_2,
	sizeof(asn_DEF_nonUL_Configuration_r10_tags_2)
		/sizeof(asn_DEF_nonUL_Configuration_r10_tags_2[0]) - 1, /* 1 */
	asn_DEF_nonUL_Configuration_r10_tags_2,	/* Same as above */
	sizeof(asn_DEF_nonUL_Configuration_r10_tags_2)
		/sizeof(asn_DEF_nonUL_Configuration_r10_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_nonUL_Configuration_r10_2,
	6,	/* Elements count */
	&asn_SPC_nonUL_Configuration_r10_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ul_Bandwidth_r10_value2enum_18[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n15" },
	{ 2,	3,	"n25" },
	{ 3,	3,	"n50" },
	{ 4,	3,	"n75" },
	{ 5,	4,	"n100" }
};
static const unsigned int asn_MAP_ul_Bandwidth_r10_enum2value_18[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4	/* n75(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_ul_Bandwidth_r10_specs_18 = {
	asn_MAP_ul_Bandwidth_r10_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_ul_Bandwidth_r10_enum2value_18,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ul_Bandwidth_r10_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_Bandwidth_r10_18 = {
	"ul-Bandwidth-r10",
	"ul-Bandwidth-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_ul_Bandwidth_r10_tags_18,
	sizeof(asn_DEF_ul_Bandwidth_r10_tags_18)
		/sizeof(asn_DEF_ul_Bandwidth_r10_tags_18[0]) - 1, /* 1 */
	asn_DEF_ul_Bandwidth_r10_tags_18,	/* Same as above */
	sizeof(asn_DEF_ul_Bandwidth_r10_tags_18)
		/sizeof(asn_DEF_ul_Bandwidth_r10_tags_18[0]), /* 2 */
	{ 0, &asn_PER_type_ul_Bandwidth_r10_constr_18, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ul_Bandwidth_r10_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ul_FreqInfo_r10_16[] = {
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10, ul_CarrierFreq_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-CarrierFreq-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10, ul_Bandwidth_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ul_Bandwidth_r10_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-Bandwidth-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10, additionalSpectrumEmissionSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSpectrumEmission,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalSpectrumEmissionSCell-r10"
		},
};
static const int asn_MAP_ul_FreqInfo_r10_oms_16[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ul_FreqInfo_r10_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ul_FreqInfo_r10_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-CarrierFreq-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-Bandwidth-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* additionalSpectrumEmissionSCell-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ul_FreqInfo_r10_specs_16 = {
	sizeof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10),
	offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10, _asn_ctx),
	asn_MAP_ul_FreqInfo_r10_tag2el_16,
	3,	/* Count of tags in the map */
	asn_MAP_ul_FreqInfo_r10_oms_16,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_FreqInfo_r10_16 = {
	"ul-FreqInfo-r10",
	"ul-FreqInfo-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_ul_FreqInfo_r10_tags_16,
	sizeof(asn_DEF_ul_FreqInfo_r10_tags_16)
		/sizeof(asn_DEF_ul_FreqInfo_r10_tags_16[0]) - 1, /* 1 */
	asn_DEF_ul_FreqInfo_r10_tags_16,	/* Same as above */
	sizeof(asn_DEF_ul_FreqInfo_r10_tags_16)
		/sizeof(asn_DEF_ul_FreqInfo_r10_tags_16[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ul_FreqInfo_r10_16,
	3,	/* Elements count */
	&asn_SPC_ul_FreqInfo_r10_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ul_Configuration_r10_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10, ul_FreqInfo_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ul_FreqInfo_r10_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-FreqInfo-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10, p_Max_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p-Max-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10, uplinkPowerControlCommonSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlCommonSCell_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPowerControlCommonSCell-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10, soundingRS_UL_ConfigCommon_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SoundingRS_UL_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"soundingRS-UL-ConfigCommon-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10, ul_CyclicPrefixLength_r10),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_CyclicPrefixLength,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-CyclicPrefixLength-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10, prach_ConfigSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_ConfigSCell_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prach-ConfigSCell-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10, pusch_ConfigCommon_r10),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-ConfigCommon-r10"
		},
};
static const int asn_MAP_ul_Configuration_r10_oms_15[] = { 1, 5 };
static const ber_tlv_tag_t asn_DEF_ul_Configuration_r10_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ul_Configuration_r10_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-FreqInfo-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* p-Max-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uplinkPowerControlCommonSCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* soundingRS-UL-ConfigCommon-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ul-CyclicPrefixLength-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* prach-ConfigSCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* pusch-ConfigCommon-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ul_Configuration_r10_specs_15 = {
	sizeof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10),
	offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r10, _asn_ctx),
	asn_MAP_ul_Configuration_r10_tag2el_15,
	7,	/* Count of tags in the map */
	asn_MAP_ul_Configuration_r10_oms_15,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_Configuration_r10_15 = {
	"ul-Configuration-r10",
	"ul-Configuration-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_ul_Configuration_r10_tags_15,
	sizeof(asn_DEF_ul_Configuration_r10_tags_15)
		/sizeof(asn_DEF_ul_Configuration_r10_tags_15[0]) - 1, /* 1 */
	asn_DEF_ul_Configuration_r10_tags_15,	/* Same as above */
	sizeof(asn_DEF_ul_Configuration_r10_tags_15)
		/sizeof(asn_DEF_ul_Configuration_r10_tags_15[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ul_Configuration_r10_15,
	7,	/* Elements count */
	&asn_SPC_ul_Configuration_r10_specs_15	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ul_Bandwidth_r14_value2enum_46[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n15" },
	{ 2,	3,	"n25" },
	{ 3,	3,	"n50" },
	{ 4,	3,	"n75" },
	{ 5,	4,	"n100" }
};
static const unsigned int asn_MAP_ul_Bandwidth_r14_enum2value_46[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4	/* n75(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_ul_Bandwidth_r14_specs_46 = {
	asn_MAP_ul_Bandwidth_r14_value2enum_46,	/* "tag" => N; sorted by tag */
	asn_MAP_ul_Bandwidth_r14_enum2value_46,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ul_Bandwidth_r14_tags_46[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_Bandwidth_r14_46 = {
	"ul-Bandwidth-r14",
	"ul-Bandwidth-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_ul_Bandwidth_r14_tags_46,
	sizeof(asn_DEF_ul_Bandwidth_r14_tags_46)
		/sizeof(asn_DEF_ul_Bandwidth_r14_tags_46[0]) - 1, /* 1 */
	asn_DEF_ul_Bandwidth_r14_tags_46,	/* Same as above */
	sizeof(asn_DEF_ul_Bandwidth_r14_tags_46)
		/sizeof(asn_DEF_ul_Bandwidth_r14_tags_46[0]), /* 2 */
	{ 0, &asn_PER_type_ul_Bandwidth_r14_constr_46, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ul_Bandwidth_r14_specs_46	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ul_FreqInfo_r14_44[] = {
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r14__ul_FreqInfo_r14, ul_CarrierFreq_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-CarrierFreq-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r14__ul_FreqInfo_r14, ul_Bandwidth_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ul_Bandwidth_r14_46,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-Bandwidth-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r14__ul_FreqInfo_r14, additionalSpectrumEmissionSCell_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSpectrumEmission,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalSpectrumEmissionSCell-r14"
		},
};
static const int asn_MAP_ul_FreqInfo_r14_oms_44[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ul_FreqInfo_r14_tags_44[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ul_FreqInfo_r14_tag2el_44[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-CarrierFreq-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-Bandwidth-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* additionalSpectrumEmissionSCell-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ul_FreqInfo_r14_specs_44 = {
	sizeof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r14__ul_FreqInfo_r14),
	offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r14__ul_FreqInfo_r14, _asn_ctx),
	asn_MAP_ul_FreqInfo_r14_tag2el_44,
	3,	/* Count of tags in the map */
	asn_MAP_ul_FreqInfo_r14_oms_44,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_FreqInfo_r14_44 = {
	"ul-FreqInfo-r14",
	"ul-FreqInfo-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_ul_FreqInfo_r14_tags_44,
	sizeof(asn_DEF_ul_FreqInfo_r14_tags_44)
		/sizeof(asn_DEF_ul_FreqInfo_r14_tags_44[0]) - 1, /* 1 */
	asn_DEF_ul_FreqInfo_r14_tags_44,	/* Same as above */
	sizeof(asn_DEF_ul_FreqInfo_r14_tags_44)
		/sizeof(asn_DEF_ul_FreqInfo_r14_tags_44[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ul_FreqInfo_r14_44,
	3,	/* Elements count */
	&asn_SPC_ul_FreqInfo_r14_specs_44	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ul_Configuration_r14_43[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r14, ul_FreqInfo_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ul_FreqInfo_r14_44,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-FreqInfo-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r14, p_Max_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p-Max-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r14, soundingRS_UL_ConfigCommon_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SoundingRS_UL_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"soundingRS-UL-ConfigCommon-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r14, ul_CyclicPrefixLength_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_CyclicPrefixLength,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-CyclicPrefixLength-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r14, prach_ConfigSCell_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_ConfigSCell_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prach-ConfigSCell-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r14, uplinkPowerControlCommonPUSCH_LessCell_v1430),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlCommonPUSCH_LessCell_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPowerControlCommonPUSCH-LessCell-v1430"
		},
};
static const int asn_MAP_ul_Configuration_r14_oms_43[] = { 1, 4, 5 };
static const ber_tlv_tag_t asn_DEF_ul_Configuration_r14_tags_43[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ul_Configuration_r14_tag2el_43[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-FreqInfo-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* p-Max-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* soundingRS-UL-ConfigCommon-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ul-CyclicPrefixLength-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* prach-ConfigSCell-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* uplinkPowerControlCommonPUSCH-LessCell-v1430 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ul_Configuration_r14_specs_43 = {
	sizeof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r14),
	offsetof(struct RadioResourceConfigCommonSCell_r10__ul_Configuration_r14, _asn_ctx),
	asn_MAP_ul_Configuration_r14_tag2el_43,
	6,	/* Count of tags in the map */
	asn_MAP_ul_Configuration_r14_oms_43,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_Configuration_r14_43 = {
	"ul-Configuration-r14",
	"ul-Configuration-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_ul_Configuration_r14_tags_43,
	sizeof(asn_DEF_ul_Configuration_r14_tags_43)
		/sizeof(asn_DEF_ul_Configuration_r14_tags_43[0]) - 1, /* 1 */
	asn_DEF_ul_Configuration_r14_tags_43,	/* Same as above */
	sizeof(asn_DEF_ul_Configuration_r14_tags_43)
		/sizeof(asn_DEF_ul_Configuration_r14_tags_43[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ul_Configuration_r14_43,
	6,	/* Elements count */
	&asn_SPC_ul_Configuration_r14_specs_43	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_harq_ReferenceConfig_r14_value2enum_59[] = {
	{ 0,	3,	"sa2" },
	{ 1,	3,	"sa4" },
	{ 2,	3,	"sa5" }
};
static const unsigned int asn_MAP_harq_ReferenceConfig_r14_enum2value_59[] = {
	0,	/* sa2(0) */
	1,	/* sa4(1) */
	2	/* sa5(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_harq_ReferenceConfig_r14_specs_59 = {
	asn_MAP_harq_ReferenceConfig_r14_value2enum_59,	/* "tag" => N; sorted by tag */
	asn_MAP_harq_ReferenceConfig_r14_enum2value_59,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_harq_ReferenceConfig_r14_tags_59[] = {
	(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_harq_ReferenceConfig_r14_59 = {
	"harq-ReferenceConfig-r14",
	"harq-ReferenceConfig-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_harq_ReferenceConfig_r14_tags_59,
	sizeof(asn_DEF_harq_ReferenceConfig_r14_tags_59)
		/sizeof(asn_DEF_harq_ReferenceConfig_r14_tags_59[0]) - 1, /* 1 */
	asn_DEF_harq_ReferenceConfig_r14_tags_59,	/* Same as above */
	sizeof(asn_DEF_harq_ReferenceConfig_r14_tags_59)
		/sizeof(asn_DEF_harq_ReferenceConfig_r14_tags_59[0]), /* 2 */
	{ 0, &asn_PER_type_harq_ReferenceConfig_r14_constr_59, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_harq_ReferenceConfig_r14_specs_59	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_soundingRS_FlexibleTiming_r14_value2enum_63[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_soundingRS_FlexibleTiming_r14_enum2value_63[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_soundingRS_FlexibleTiming_r14_specs_63 = {
	asn_MAP_soundingRS_FlexibleTiming_r14_value2enum_63,	/* "tag" => N; sorted by tag */
	asn_MAP_soundingRS_FlexibleTiming_r14_enum2value_63,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_soundingRS_FlexibleTiming_r14_tags_63[] = {
	(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_soundingRS_FlexibleTiming_r14_63 = {
	"soundingRS-FlexibleTiming-r14",
	"soundingRS-FlexibleTiming-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_soundingRS_FlexibleTiming_r14_tags_63,
	sizeof(asn_DEF_soundingRS_FlexibleTiming_r14_tags_63)
		/sizeof(asn_DEF_soundingRS_FlexibleTiming_r14_tags_63[0]) - 1, /* 1 */
	asn_DEF_soundingRS_FlexibleTiming_r14_tags_63,	/* Same as above */
	sizeof(asn_DEF_soundingRS_FlexibleTiming_r14_tags_63)
		/sizeof(asn_DEF_soundingRS_FlexibleTiming_r14_tags_63[0]), /* 2 */
	{ 0, &asn_PER_type_soundingRS_FlexibleTiming_r14_constr_63, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_soundingRS_FlexibleTiming_r14_specs_63	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RadioResourceConfigCommonSCell_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSCell_r10, nonUL_Configuration_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_nonUL_Configuration_r10_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonUL-Configuration-r10"
		},
	{ ATF_POINTER, 16, offsetof(struct RadioResourceConfigCommonSCell_r10, ul_Configuration_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ul_Configuration_r10_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-Configuration-r10"
		},
	{ ATF_POINTER, 15, offsetof(struct RadioResourceConfigCommonSCell_r10, ul_CarrierFreq_v1090),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_v9e0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-CarrierFreq-v1090"
		},
	{ ATF_POINTER, 14, offsetof(struct RadioResourceConfigCommonSCell_r10, rach_ConfigCommonSCell_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RACH_ConfigCommonSCell_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach-ConfigCommonSCell-r11"
		},
	{ ATF_POINTER, 13, offsetof(struct RadioResourceConfigCommonSCell_r10, prach_ConfigSCell_r11),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prach-ConfigSCell-r11"
		},
	{ ATF_POINTER, 12, offsetof(struct RadioResourceConfigCommonSCell_r10, tdd_Config_v1130),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_Config_v1130,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Config-v1130"
		},
	{ ATF_POINTER, 11, offsetof(struct RadioResourceConfigCommonSCell_r10, uplinkPowerControlCommonSCell_v1130),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlCommonSCell_v1130,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPowerControlCommonSCell-v1130"
		},
	{ ATF_POINTER, 10, offsetof(struct RadioResourceConfigCommonSCell_r10, pusch_ConfigCommon_v1270),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_ConfigCommon_v1270,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-ConfigCommon-v1270"
		},
	{ ATF_POINTER, 9, offsetof(struct RadioResourceConfigCommonSCell_r10, pucch_ConfigCommon_r13),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUCCH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-ConfigCommon-r13"
		},
	{ ATF_POINTER, 8, offsetof(struct RadioResourceConfigCommonSCell_r10, uplinkPowerControlCommonSCell_v1310),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlCommonSCell_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPowerControlCommonSCell-v1310"
		},
	{ ATF_POINTER, 7, offsetof(struct RadioResourceConfigCommonSCell_r10, highSpeedConfigSCell_r14),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HighSpeedConfigSCell_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"highSpeedConfigSCell-r14"
		},
	{ ATF_POINTER, 6, offsetof(struct RadioResourceConfigCommonSCell_r10, prach_Config_v1430),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_Config_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prach-Config-v1430"
		},
	{ ATF_POINTER, 5, offsetof(struct RadioResourceConfigCommonSCell_r10, ul_Configuration_r14),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		0,
		&asn_DEF_ul_Configuration_r14_43,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-Configuration-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioResourceConfigCommonSCell_r10, harq_ReferenceConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_harq_ReferenceConfig_r14_59,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"harq-ReferenceConfig-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioResourceConfigCommonSCell_r10, soundingRS_FlexibleTiming_r14),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_soundingRS_FlexibleTiming_r14_63,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"soundingRS-FlexibleTiming-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigCommonSCell_r10, mbsfn_SubframeConfigList_v1430),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBSFN_SubframeConfigList_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbsfn-SubframeConfigList-v1430"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSCell_r10, uplinkPowerControlCommonSCell_v1530),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlCommon_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPowerControlCommonSCell-v1530"
		},
};
static const int asn_MAP_RadioResourceConfigCommonSCell_r10_oms_1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
static const ber_tlv_tag_t asn_DEF_RadioResourceConfigCommonSCell_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RadioResourceConfigCommonSCell_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nonUL-Configuration-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-Configuration-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ul-CarrierFreq-v1090 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rach-ConfigCommonSCell-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* prach-ConfigSCell-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* tdd-Config-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* uplinkPowerControlCommonSCell-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* pusch-ConfigCommon-v1270 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* pucch-ConfigCommon-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* uplinkPowerControlCommonSCell-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* highSpeedConfigSCell-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* prach-Config-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* ul-Configuration-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* harq-ReferenceConfig-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* soundingRS-FlexibleTiming-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* mbsfn-SubframeConfigList-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 } /* uplinkPowerControlCommonSCell-v1530 */
};
asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigCommonSCell_r10_specs_1 = {
	sizeof(struct RadioResourceConfigCommonSCell_r10),
	offsetof(struct RadioResourceConfigCommonSCell_r10, _asn_ctx),
	asn_MAP_RadioResourceConfigCommonSCell_r10_tag2el_1,
	17,	/* Count of tags in the map */
	asn_MAP_RadioResourceConfigCommonSCell_r10_oms_1,	/* Optional members */
	1, 15,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigCommonSCell_r10 = {
	"RadioResourceConfigCommonSCell-r10",
	"RadioResourceConfigCommonSCell-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_RadioResourceConfigCommonSCell_r10_tags_1,
	sizeof(asn_DEF_RadioResourceConfigCommonSCell_r10_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigCommonSCell_r10_tags_1[0]), /* 1 */
	asn_DEF_RadioResourceConfigCommonSCell_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioResourceConfigCommonSCell_r10_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigCommonSCell_r10_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RadioResourceConfigCommonSCell_r10_1,
	17,	/* Elements count */
	&asn_SPC_RadioResourceConfigCommonSCell_r10_specs_1	/* Additional specs */
};

