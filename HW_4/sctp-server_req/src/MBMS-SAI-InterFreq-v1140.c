/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "MBMS-SAI-InterFreq-v1140.h"

#include "MultiBandInfoList-r11.h"
asn_TYPE_member_t asn_MBR_MBMS_SAI_InterFreq_v1140_1[] = {
	{ ATF_POINTER, 1, offsetof(struct MBMS_SAI_InterFreq_v1140, multiBandInfoList_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiBandInfoList_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multiBandInfoList-r11"
		},
};
static const int asn_MAP_MBMS_SAI_InterFreq_v1140_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_MBMS_SAI_InterFreq_v1140_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBMS_SAI_InterFreq_v1140_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* multiBandInfoList-r11 */
};
asn_SEQUENCE_specifics_t asn_SPC_MBMS_SAI_InterFreq_v1140_specs_1 = {
	sizeof(struct MBMS_SAI_InterFreq_v1140),
	offsetof(struct MBMS_SAI_InterFreq_v1140, _asn_ctx),
	asn_MAP_MBMS_SAI_InterFreq_v1140_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_MBMS_SAI_InterFreq_v1140_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_SAI_InterFreq_v1140 = {
	"MBMS-SAI-InterFreq-v1140",
	"MBMS-SAI-InterFreq-v1140",
	&asn_OP_SEQUENCE,
	asn_DEF_MBMS_SAI_InterFreq_v1140_tags_1,
	sizeof(asn_DEF_MBMS_SAI_InterFreq_v1140_tags_1)
		/sizeof(asn_DEF_MBMS_SAI_InterFreq_v1140_tags_1[0]), /* 1 */
	asn_DEF_MBMS_SAI_InterFreq_v1140_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_SAI_InterFreq_v1140_tags_1)
		/sizeof(asn_DEF_MBMS_SAI_InterFreq_v1140_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MBMS_SAI_InterFreq_v1140_1,
	1,	/* Elements count */
	&asn_SPC_MBMS_SAI_InterFreq_v1140_specs_1	/* Additional specs */
};

