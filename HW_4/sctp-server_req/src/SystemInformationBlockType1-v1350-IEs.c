/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SystemInformationBlockType1-v1350-IEs.h"

#include "CellSelectionInfoCE1-r13.h"
#include "SystemInformationBlockType1-v1360-IEs.h"
asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_v1350_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType1_v1350_IEs, cellSelectionInfoCE1_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellSelectionInfoCE1_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellSelectionInfoCE1-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1_v1350_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType1_v1360_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_SystemInformationBlockType1_v1350_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType1_v1350_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType1_v1350_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellSelectionInfoCE1-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_v1350_IEs_specs_1 = {
	sizeof(struct SystemInformationBlockType1_v1350_IEs),
	offsetof(struct SystemInformationBlockType1_v1350_IEs, _asn_ctx),
	asn_MAP_SystemInformationBlockType1_v1350_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType1_v1350_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_v1350_IEs = {
	"SystemInformationBlockType1-v1350-IEs",
	"SystemInformationBlockType1-v1350-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType1_v1350_IEs_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType1_v1350_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_v1350_IEs_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType1_v1350_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType1_v1350_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_v1350_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType1_v1350_IEs_1,
	2,	/* Elements count */
	&asn_SPC_SystemInformationBlockType1_v1350_IEs_specs_1	/* Additional specs */
};

