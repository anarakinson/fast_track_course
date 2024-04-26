/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "ROHC-ProfileSupportList-r15.h"

asn_TYPE_member_t asn_MBR_ROHC_ProfileSupportList_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ROHC_ProfileSupportList_r15, profile0x0001_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0001-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ROHC_ProfileSupportList_r15, profile0x0002_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0002-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ROHC_ProfileSupportList_r15, profile0x0003_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0003-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ROHC_ProfileSupportList_r15, profile0x0004_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0004-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ROHC_ProfileSupportList_r15, profile0x0006_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0006-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ROHC_ProfileSupportList_r15, profile0x0101_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0101-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ROHC_ProfileSupportList_r15, profile0x0102_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0102-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ROHC_ProfileSupportList_r15, profile0x0103_r15),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0103-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ROHC_ProfileSupportList_r15, profile0x0104_r15),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0104-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_ROHC_ProfileSupportList_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ROHC_ProfileSupportList_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* profile0x0001-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* profile0x0002-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* profile0x0003-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* profile0x0004-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* profile0x0006-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* profile0x0101-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* profile0x0102-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* profile0x0103-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* profile0x0104-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_ROHC_ProfileSupportList_r15_specs_1 = {
	sizeof(struct ROHC_ProfileSupportList_r15),
	offsetof(struct ROHC_ProfileSupportList_r15, _asn_ctx),
	asn_MAP_ROHC_ProfileSupportList_r15_tag2el_1,
	9,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ROHC_ProfileSupportList_r15 = {
	"ROHC-ProfileSupportList-r15",
	"ROHC-ProfileSupportList-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_ROHC_ProfileSupportList_r15_tags_1,
	sizeof(asn_DEF_ROHC_ProfileSupportList_r15_tags_1)
		/sizeof(asn_DEF_ROHC_ProfileSupportList_r15_tags_1[0]), /* 1 */
	asn_DEF_ROHC_ProfileSupportList_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_ROHC_ProfileSupportList_r15_tags_1)
		/sizeof(asn_DEF_ROHC_ProfileSupportList_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ROHC_ProfileSupportList_r15_1,
	9,	/* Elements count */
	&asn_SPC_ROHC_ProfileSupportList_r15_specs_1	/* Additional specs */
};

