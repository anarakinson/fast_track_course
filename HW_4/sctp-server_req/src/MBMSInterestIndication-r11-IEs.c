/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "MBMSInterestIndication-r11-IEs.h"

#include "CarrierFreqListMBMS-r11.h"
#include "MBMSInterestIndication-v1310-IEs.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_mbms_Priority_r11_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_mbms_Priority_r11_value2enum_3[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_mbms_Priority_r11_enum2value_3[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_mbms_Priority_r11_specs_3 = {
	asn_MAP_mbms_Priority_r11_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_mbms_Priority_r11_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mbms_Priority_r11_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mbms_Priority_r11_3 = {
	"mbms-Priority-r11",
	"mbms-Priority-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_mbms_Priority_r11_tags_3,
	sizeof(asn_DEF_mbms_Priority_r11_tags_3)
		/sizeof(asn_DEF_mbms_Priority_r11_tags_3[0]) - 1, /* 1 */
	asn_DEF_mbms_Priority_r11_tags_3,	/* Same as above */
	sizeof(asn_DEF_mbms_Priority_r11_tags_3)
		/sizeof(asn_DEF_mbms_Priority_r11_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_mbms_Priority_r11_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mbms_Priority_r11_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MBMSInterestIndication_r11_IEs_1[] = {
	{ ATF_POINTER, 4, offsetof(struct MBMSInterestIndication_r11_IEs, mbms_FreqList_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqListMBMS_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-FreqList-r11"
		},
	{ ATF_POINTER, 3, offsetof(struct MBMSInterestIndication_r11_IEs, mbms_Priority_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mbms_Priority_r11_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbms-Priority-r11"
		},
	{ ATF_POINTER, 2, offsetof(struct MBMSInterestIndication_r11_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct MBMSInterestIndication_r11_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMSInterestIndication_v1310_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_MBMSInterestIndication_r11_IEs_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_MBMSInterestIndication_r11_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBMSInterestIndication_r11_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbms-FreqList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mbms-Priority-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_MBMSInterestIndication_r11_IEs_specs_1 = {
	sizeof(struct MBMSInterestIndication_r11_IEs),
	offsetof(struct MBMSInterestIndication_r11_IEs, _asn_ctx),
	asn_MAP_MBMSInterestIndication_r11_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MBMSInterestIndication_r11_IEs_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBMSInterestIndication_r11_IEs = {
	"MBMSInterestIndication-r11-IEs",
	"MBMSInterestIndication-r11-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_MBMSInterestIndication_r11_IEs_tags_1,
	sizeof(asn_DEF_MBMSInterestIndication_r11_IEs_tags_1)
		/sizeof(asn_DEF_MBMSInterestIndication_r11_IEs_tags_1[0]), /* 1 */
	asn_DEF_MBMSInterestIndication_r11_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMSInterestIndication_r11_IEs_tags_1)
		/sizeof(asn_DEF_MBMSInterestIndication_r11_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MBMSInterestIndication_r11_IEs_1,
	4,	/* Elements count */
	&asn_SPC_MBMSInterestIndication_r11_IEs_specs_1	/* Additional specs */
};

