/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SystemInformationBlockType23-NB-r15.h"

#include "UL-ConfigCommonList-NB-v1530.h"
asn_TYPE_member_t asn_MBR_SystemInformationBlockType23_NB_r15_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType23_NB_r15, ul_ConfigList_v1530),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_ConfigCommonList_NB_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-ConfigList-v1530"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType23_NB_r15, ul_ConfigListMixed_v1530),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_ConfigCommonList_NB_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-ConfigListMixed-v1530"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType23_NB_r15, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
};
static const int asn_MAP_SystemInformationBlockType23_NB_r15_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType23_NB_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType23_NB_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-ConfigList-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-ConfigListMixed-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* lateNonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType23_NB_r15_specs_1 = {
	sizeof(struct SystemInformationBlockType23_NB_r15),
	offsetof(struct SystemInformationBlockType23_NB_r15, _asn_ctx),
	asn_MAP_SystemInformationBlockType23_NB_r15_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType23_NB_r15_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType23_NB_r15 = {
	"SystemInformationBlockType23-NB-r15",
	"SystemInformationBlockType23-NB-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType23_NB_r15_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType23_NB_r15_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType23_NB_r15_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType23_NB_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType23_NB_r15_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType23_NB_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType23_NB_r15_1,
	3,	/* Elements count */
	&asn_SPC_SystemInformationBlockType23_NB_r15_specs_1	/* Additional specs */
};
