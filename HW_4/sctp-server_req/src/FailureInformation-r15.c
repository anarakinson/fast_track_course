/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "FailureInformation-r15.h"

#include "FailedLogicalChannelInfo-r15.h"
static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_3 = {
	sizeof(struct FailureInformation_r15__nonCriticalExtension),
	offsetof(struct FailureInformation_r15__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_3 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_3,
	sizeof(asn_DEF_nonCriticalExtension_tags_3)
		/sizeof(asn_DEF_nonCriticalExtension_tags_3[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_3,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_3)
		/sizeof(asn_DEF_nonCriticalExtension_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_FailureInformation_r15_1[] = {
	{ ATF_POINTER, 1, offsetof(struct FailureInformation_r15, failedLogicalChannelInfo_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FailedLogicalChannelInfo_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"failedLogicalChannelInfo-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FailureInformation_r15, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_FailureInformation_r15_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_FailureInformation_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FailureInformation_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* failedLogicalChannelInfo-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_FailureInformation_r15_specs_1 = {
	sizeof(struct FailureInformation_r15),
	offsetof(struct FailureInformation_r15, _asn_ctx),
	asn_MAP_FailureInformation_r15_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_FailureInformation_r15_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FailureInformation_r15 = {
	"FailureInformation-r15",
	"FailureInformation-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_FailureInformation_r15_tags_1,
	sizeof(asn_DEF_FailureInformation_r15_tags_1)
		/sizeof(asn_DEF_FailureInformation_r15_tags_1[0]), /* 1 */
	asn_DEF_FailureInformation_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_FailureInformation_r15_tags_1)
		/sizeof(asn_DEF_FailureInformation_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_FailureInformation_r15_1,
	2,	/* Elements count */
	&asn_SPC_FailureInformation_r15_specs_1	/* Additional specs */
};

