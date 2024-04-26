/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "RRCConnectionReestablishment-NB.h"

static asn_per_constraints_t asn_PER_type_c1_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_criticalExtensions_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_c1_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReestablishment_NB__criticalExtensions__c1, choice.rrcConnectionReestablishment_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionReestablishment_NB_r13_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionReestablishment-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReestablishment_NB__criticalExtensions__c1, choice.spare1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare1"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_c1_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcConnectionReestablishment-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* spare1 */
};
static asn_CHOICE_specifics_t asn_SPC_c1_specs_4 = {
	sizeof(struct RRCConnectionReestablishment_NB__criticalExtensions__c1),
	offsetof(struct RRCConnectionReestablishment_NB__criticalExtensions__c1, _asn_ctx),
	offsetof(struct RRCConnectionReestablishment_NB__criticalExtensions__c1, present),
	sizeof(((struct RRCConnectionReestablishment_NB__criticalExtensions__c1 *)0)->present),
	asn_MAP_c1_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_c1_4 = {
	"c1",
	"c1",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_c1_constr_4, CHOICE_constraint },
	asn_MBR_c1_4,
	2,	/* Elements count */
	&asn_SPC_c1_specs_4	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_criticalExtensionsFuture_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_criticalExtensionsFuture_specs_7 = {
	sizeof(struct RRCConnectionReestablishment_NB__criticalExtensions__criticalExtensionsFuture),
	offsetof(struct RRCConnectionReestablishment_NB__criticalExtensions__criticalExtensionsFuture, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensionsFuture_7 = {
	"criticalExtensionsFuture",
	"criticalExtensionsFuture",
	&asn_OP_SEQUENCE,
	asn_DEF_criticalExtensionsFuture_tags_7,
	sizeof(asn_DEF_criticalExtensionsFuture_tags_7)
		/sizeof(asn_DEF_criticalExtensionsFuture_tags_7[0]) - 1, /* 1 */
	asn_DEF_criticalExtensionsFuture_tags_7,	/* Same as above */
	sizeof(asn_DEF_criticalExtensionsFuture_tags_7)
		/sizeof(asn_DEF_criticalExtensionsFuture_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_criticalExtensionsFuture_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_criticalExtensions_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReestablishment_NB__criticalExtensions, choice.c1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_c1_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"c1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReestablishment_NB__criticalExtensions, choice.criticalExtensionsFuture),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_criticalExtensionsFuture_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"criticalExtensionsFuture"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_criticalExtensions_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* c1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* criticalExtensionsFuture */
};
static asn_CHOICE_specifics_t asn_SPC_criticalExtensions_specs_3 = {
	sizeof(struct RRCConnectionReestablishment_NB__criticalExtensions),
	offsetof(struct RRCConnectionReestablishment_NB__criticalExtensions, _asn_ctx),
	offsetof(struct RRCConnectionReestablishment_NB__criticalExtensions, present),
	sizeof(((struct RRCConnectionReestablishment_NB__criticalExtensions *)0)->present),
	asn_MAP_criticalExtensions_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensions_3 = {
	"criticalExtensions",
	"criticalExtensions",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_criticalExtensions_constr_3, CHOICE_constraint },
	asn_MBR_criticalExtensions_3,
	2,	/* Elements count */
	&asn_SPC_criticalExtensions_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCConnectionReestablishment_NB_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReestablishment_NB, rrc_TransactionIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TransactionIdentifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrc-TransactionIdentifier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReestablishment_NB, criticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_criticalExtensions_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"criticalExtensions"
		},
};
static const ber_tlv_tag_t asn_DEF_RRCConnectionReestablishment_NB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionReestablishment_NB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrc-TransactionIdentifier */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* criticalExtensions */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReestablishment_NB_specs_1 = {
	sizeof(struct RRCConnectionReestablishment_NB),
	offsetof(struct RRCConnectionReestablishment_NB, _asn_ctx),
	asn_MAP_RRCConnectionReestablishment_NB_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionReestablishment_NB = {
	"RRCConnectionReestablishment-NB",
	"RRCConnectionReestablishment-NB",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionReestablishment_NB_tags_1,
	sizeof(asn_DEF_RRCConnectionReestablishment_NB_tags_1)
		/sizeof(asn_DEF_RRCConnectionReestablishment_NB_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionReestablishment_NB_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionReestablishment_NB_tags_1)
		/sizeof(asn_DEF_RRCConnectionReestablishment_NB_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCConnectionReestablishment_NB_1,
	2,	/* Elements count */
	&asn_SPC_RRCConnectionReestablishment_NB_specs_1	/* Additional specs */
};

