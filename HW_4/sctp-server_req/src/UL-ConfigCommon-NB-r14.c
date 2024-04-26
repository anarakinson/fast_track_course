/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "UL-ConfigCommon-NB-r14.h"

#include "NPRACH-ParametersList-NB-r14.h"
asn_TYPE_member_t asn_MBR_UL_ConfigCommon_NB_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_ConfigCommon_NB_r14, ul_CarrierFreq_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreq_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-CarrierFreq-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct UL_ConfigCommon_NB_r14, nprach_ParametersList_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NPRACH_ParametersList_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-ParametersList-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct UL_ConfigCommon_NB_r14, nprach_ParametersListEDT_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NPRACH_ParametersList_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-ParametersListEDT-r15"
		},
};
static const int asn_MAP_UL_ConfigCommon_NB_r14_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_UL_ConfigCommon_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UL_ConfigCommon_NB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-CarrierFreq-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nprach-ParametersList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nprach-ParametersListEDT-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_UL_ConfigCommon_NB_r14_specs_1 = {
	sizeof(struct UL_ConfigCommon_NB_r14),
	offsetof(struct UL_ConfigCommon_NB_r14, _asn_ctx),
	asn_MAP_UL_ConfigCommon_NB_r14_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_UL_ConfigCommon_NB_r14_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UL_ConfigCommon_NB_r14 = {
	"UL-ConfigCommon-NB-r14",
	"UL-ConfigCommon-NB-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_UL_ConfigCommon_NB_r14_tags_1,
	sizeof(asn_DEF_UL_ConfigCommon_NB_r14_tags_1)
		/sizeof(asn_DEF_UL_ConfigCommon_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_UL_ConfigCommon_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_UL_ConfigCommon_NB_r14_tags_1)
		/sizeof(asn_DEF_UL_ConfigCommon_NB_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UL_ConfigCommon_NB_r14_1,
	3,	/* Elements count */
	&asn_SPC_UL_ConfigCommon_NB_r14_specs_1	/* Additional specs */
};
