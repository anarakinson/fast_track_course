/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SL-CarrierFreqInfo-v1310.h"

#include "SL-ResourcesInterFreq-r13.h"
#include "SL-DiscConfigOtherInterFreq-r13.h"
asn_TYPE_member_t asn_MBR_SL_CarrierFreqInfo_v1310_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SL_CarrierFreqInfo_v1310, discResourcesNonPS_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_ResourcesInterFreq_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discResourcesNonPS-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_CarrierFreqInfo_v1310, discResourcesPS_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_ResourcesInterFreq_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discResourcesPS-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_CarrierFreqInfo_v1310, discConfigOther_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_DiscConfigOtherInterFreq_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discConfigOther-r13"
		},
};
static const int asn_MAP_SL_CarrierFreqInfo_v1310_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_SL_CarrierFreqInfo_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_CarrierFreqInfo_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* discResourcesNonPS-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* discResourcesPS-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* discConfigOther-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_CarrierFreqInfo_v1310_specs_1 = {
	sizeof(struct SL_CarrierFreqInfo_v1310),
	offsetof(struct SL_CarrierFreqInfo_v1310, _asn_ctx),
	asn_MAP_SL_CarrierFreqInfo_v1310_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SL_CarrierFreqInfo_v1310_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_CarrierFreqInfo_v1310 = {
	"SL-CarrierFreqInfo-v1310",
	"SL-CarrierFreqInfo-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_CarrierFreqInfo_v1310_tags_1,
	sizeof(asn_DEF_SL_CarrierFreqInfo_v1310_tags_1)
		/sizeof(asn_DEF_SL_CarrierFreqInfo_v1310_tags_1[0]), /* 1 */
	asn_DEF_SL_CarrierFreqInfo_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_CarrierFreqInfo_v1310_tags_1)
		/sizeof(asn_DEF_SL_CarrierFreqInfo_v1310_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_CarrierFreqInfo_v1310_1,
	3,	/* Elements count */
	&asn_SPC_SL_CarrierFreqInfo_v1310_specs_1	/* Additional specs */
};

