/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "RadioResourceConfigCommonPSCell-v1440.h"

asn_TYPE_member_t asn_MBR_RadioResourceConfigCommonPSCell_v1440_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonPSCell_v1440, basicFields_v1440),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigCommonSCell_v1440,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"basicFields-v1440"
		},
};
static const ber_tlv_tag_t asn_DEF_RadioResourceConfigCommonPSCell_v1440_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RadioResourceConfigCommonPSCell_v1440_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* basicFields-v1440 */
};
asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigCommonPSCell_v1440_specs_1 = {
	sizeof(struct RadioResourceConfigCommonPSCell_v1440),
	offsetof(struct RadioResourceConfigCommonPSCell_v1440, _asn_ctx),
	asn_MAP_RadioResourceConfigCommonPSCell_v1440_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigCommonPSCell_v1440 = {
	"RadioResourceConfigCommonPSCell-v1440",
	"RadioResourceConfigCommonPSCell-v1440",
	&asn_OP_SEQUENCE,
	asn_DEF_RadioResourceConfigCommonPSCell_v1440_tags_1,
	sizeof(asn_DEF_RadioResourceConfigCommonPSCell_v1440_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigCommonPSCell_v1440_tags_1[0]), /* 1 */
	asn_DEF_RadioResourceConfigCommonPSCell_v1440_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioResourceConfigCommonPSCell_v1440_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigCommonPSCell_v1440_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RadioResourceConfigCommonPSCell_v1440_1,
	1,	/* Elements count */
	&asn_SPC_RadioResourceConfigCommonPSCell_v1440_specs_1	/* Additional specs */
};

