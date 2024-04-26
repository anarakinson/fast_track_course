/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "DL-AM-RLC-r15.h"

asn_TYPE_member_t asn_MBR_DL_AM_RLC_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_AM_RLC_r15, t_Reordering_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_Reordering,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-Reordering-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_AM_RLC_r15, t_StatusProhibit_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_StatusProhibit,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-StatusProhibit-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_AM_RLC_r15, extended_RLC_LI_Field_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"extended-RLC-LI-Field-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_DL_AM_RLC_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DL_AM_RLC_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* t-Reordering-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* t-StatusProhibit-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* extended-RLC-LI-Field-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_DL_AM_RLC_r15_specs_1 = {
	sizeof(struct DL_AM_RLC_r15),
	offsetof(struct DL_AM_RLC_r15, _asn_ctx),
	asn_MAP_DL_AM_RLC_r15_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DL_AM_RLC_r15 = {
	"DL-AM-RLC-r15",
	"DL-AM-RLC-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_DL_AM_RLC_r15_tags_1,
	sizeof(asn_DEF_DL_AM_RLC_r15_tags_1)
		/sizeof(asn_DEF_DL_AM_RLC_r15_tags_1[0]), /* 1 */
	asn_DEF_DL_AM_RLC_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_AM_RLC_r15_tags_1)
		/sizeof(asn_DEF_DL_AM_RLC_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DL_AM_RLC_r15_1,
	3,	/* Elements count */
	&asn_SPC_DL_AM_RLC_r15_specs_1	/* Additional specs */
};

