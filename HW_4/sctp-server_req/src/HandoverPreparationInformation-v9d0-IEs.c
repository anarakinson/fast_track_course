/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "HandoverPreparationInformation-v9d0-IEs.h"

#include "HandoverPreparationInformation-v9e0-IEs.h"
static int
memb_lateNonCriticalExtension_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_memb_lateNonCriticalExtension_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_HandoverPreparationInformation_v9d0_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct HandoverPreparationInformation_v9d0_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_lateNonCriticalExtension_constr_2,  memb_lateNonCriticalExtension_constraint_1 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct HandoverPreparationInformation_v9d0_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HandoverPreparationInformation_v9e0_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_HandoverPreparationInformation_v9d0_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_HandoverPreparationInformation_v9d0_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_HandoverPreparationInformation_v9d0_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_HandoverPreparationInformation_v9d0_IEs_specs_1 = {
	sizeof(struct HandoverPreparationInformation_v9d0_IEs),
	offsetof(struct HandoverPreparationInformation_v9d0_IEs, _asn_ctx),
	asn_MAP_HandoverPreparationInformation_v9d0_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_HandoverPreparationInformation_v9d0_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_v9d0_IEs = {
	"HandoverPreparationInformation-v9d0-IEs",
	"HandoverPreparationInformation-v9d0-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_HandoverPreparationInformation_v9d0_IEs_tags_1,
	sizeof(asn_DEF_HandoverPreparationInformation_v9d0_IEs_tags_1)
		/sizeof(asn_DEF_HandoverPreparationInformation_v9d0_IEs_tags_1[0]), /* 1 */
	asn_DEF_HandoverPreparationInformation_v9d0_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_HandoverPreparationInformation_v9d0_IEs_tags_1)
		/sizeof(asn_DEF_HandoverPreparationInformation_v9d0_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_HandoverPreparationInformation_v9d0_IEs_1,
	2,	/* Elements count */
	&asn_SPC_HandoverPreparationInformation_v9d0_IEs_specs_1	/* Additional specs */
};

