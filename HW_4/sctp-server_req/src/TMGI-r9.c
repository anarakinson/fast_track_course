/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "TMGI-r9.h"

static int
memb_plmn_Index_r9_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_serviceId_r9_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_plmn_Index_r9_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_plmn_Id_r9_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_serviceId_r9_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  3,  3 }	/* (SIZE(3..3)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_plmn_Id_r9_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TMGI_r9__plmn_Id_r9, choice.plmn_Index_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_plmn_Index_r9_constr_3,  memb_plmn_Index_r9_constraint_2 },
		0, 0, /* No default value */
		"plmn-Index-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TMGI_r9__plmn_Id_r9, choice.explicitValue_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"explicitValue-r9"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_plmn_Id_r9_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-Index-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* explicitValue-r9 */
};
static asn_CHOICE_specifics_t asn_SPC_plmn_Id_r9_specs_2 = {
	sizeof(struct TMGI_r9__plmn_Id_r9),
	offsetof(struct TMGI_r9__plmn_Id_r9, _asn_ctx),
	offsetof(struct TMGI_r9__plmn_Id_r9, present),
	sizeof(((struct TMGI_r9__plmn_Id_r9 *)0)->present),
	asn_MAP_plmn_Id_r9_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_plmn_Id_r9_2 = {
	"plmn-Id-r9",
	"plmn-Id-r9",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_plmn_Id_r9_constr_2, CHOICE_constraint },
	asn_MBR_plmn_Id_r9_2,
	2,	/* Elements count */
	&asn_SPC_plmn_Id_r9_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_TMGI_r9_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TMGI_r9, plmn_Id_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_plmn_Id_r9_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-Id-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TMGI_r9, serviceId_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_serviceId_r9_constr_5,  memb_serviceId_r9_constraint_1 },
		0, 0, /* No default value */
		"serviceId-r9"
		},
};
static const ber_tlv_tag_t asn_DEF_TMGI_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TMGI_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-Id-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* serviceId-r9 */
};
asn_SEQUENCE_specifics_t asn_SPC_TMGI_r9_specs_1 = {
	sizeof(struct TMGI_r9),
	offsetof(struct TMGI_r9, _asn_ctx),
	asn_MAP_TMGI_r9_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TMGI_r9 = {
	"TMGI-r9",
	"TMGI-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_TMGI_r9_tags_1,
	sizeof(asn_DEF_TMGI_r9_tags_1)
		/sizeof(asn_DEF_TMGI_r9_tags_1[0]), /* 1 */
	asn_DEF_TMGI_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_TMGI_r9_tags_1)
		/sizeof(asn_DEF_TMGI_r9_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TMGI_r9_1,
	2,	/* Elements count */
	&asn_SPC_TMGI_r9_specs_1	/* Additional specs */
};

