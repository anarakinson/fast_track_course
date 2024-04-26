/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SCPTMConfiguration-v1340.h"

static int
memb_p_b_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_p_b_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_3 = {
	sizeof(struct SCPTMConfiguration_v1340__nonCriticalExtension),
	offsetof(struct SCPTMConfiguration_v1340__nonCriticalExtension, _asn_ctx),
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

asn_TYPE_member_t asn_MBR_SCPTMConfiguration_v1340_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SCPTMConfiguration_v1340, p_b_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_p_b_r13_constr_2,  memb_p_b_r13_constraint_1 },
		0, 0, /* No default value */
		"p-b-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SCPTMConfiguration_v1340, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_SCPTMConfiguration_v1340_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SCPTMConfiguration_v1340_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SCPTMConfiguration_v1340_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* p-b-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SCPTMConfiguration_v1340_specs_1 = {
	sizeof(struct SCPTMConfiguration_v1340),
	offsetof(struct SCPTMConfiguration_v1340, _asn_ctx),
	asn_MAP_SCPTMConfiguration_v1340_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SCPTMConfiguration_v1340_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SCPTMConfiguration_v1340 = {
	"SCPTMConfiguration-v1340",
	"SCPTMConfiguration-v1340",
	&asn_OP_SEQUENCE,
	asn_DEF_SCPTMConfiguration_v1340_tags_1,
	sizeof(asn_DEF_SCPTMConfiguration_v1340_tags_1)
		/sizeof(asn_DEF_SCPTMConfiguration_v1340_tags_1[0]), /* 1 */
	asn_DEF_SCPTMConfiguration_v1340_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCPTMConfiguration_v1340_tags_1)
		/sizeof(asn_DEF_SCPTMConfiguration_v1340_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SCPTMConfiguration_v1340_1,
	2,	/* Elements count */
	&asn_SPC_SCPTMConfiguration_v1340_specs_1	/* Additional specs */
};

