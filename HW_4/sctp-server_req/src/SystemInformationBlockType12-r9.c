/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SystemInformationBlockType12-r9.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_messageIdentifier_r9_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 16)) {
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
memb_serialNumber_r9_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 16)) {
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
memb_warningMessageSegmentNumber_r9_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
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
memb_dataCodingScheme_r9_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_warningMessageSegmentType_r9_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_messageIdentifier_r9_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_serialNumber_r9_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_warningMessageSegmentNumber_r9_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_dataCodingScheme_r9_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  1,  1 }	/* (SIZE(1..1)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_warningMessageSegmentType_r9_value2enum_4[] = {
	{ 0,	14,	"notLastSegment" },
	{ 1,	11,	"lastSegment" }
};
static const unsigned int asn_MAP_warningMessageSegmentType_r9_enum2value_4[] = {
	1,	/* lastSegment(1) */
	0	/* notLastSegment(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_warningMessageSegmentType_r9_specs_4 = {
	asn_MAP_warningMessageSegmentType_r9_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_warningMessageSegmentType_r9_enum2value_4,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_warningMessageSegmentType_r9_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_warningMessageSegmentType_r9_4 = {
	"warningMessageSegmentType-r9",
	"warningMessageSegmentType-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_warningMessageSegmentType_r9_tags_4,
	sizeof(asn_DEF_warningMessageSegmentType_r9_tags_4)
		/sizeof(asn_DEF_warningMessageSegmentType_r9_tags_4[0]) - 1, /* 1 */
	asn_DEF_warningMessageSegmentType_r9_tags_4,	/* Same as above */
	sizeof(asn_DEF_warningMessageSegmentType_r9_tags_4)
		/sizeof(asn_DEF_warningMessageSegmentType_r9_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_warningMessageSegmentType_r9_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_warningMessageSegmentType_r9_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType12_r9_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType12_r9, messageIdentifier_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_messageIdentifier_r9_constr_2,  memb_messageIdentifier_r9_constraint_1 },
		0, 0, /* No default value */
		"messageIdentifier-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType12_r9, serialNumber_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_serialNumber_r9_constr_3,  memb_serialNumber_r9_constraint_1 },
		0, 0, /* No default value */
		"serialNumber-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType12_r9, warningMessageSegmentType_r9),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_warningMessageSegmentType_r9_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"warningMessageSegmentType-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType12_r9, warningMessageSegmentNumber_r9),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_warningMessageSegmentNumber_r9_constr_7,  memb_warningMessageSegmentNumber_r9_constraint_1 },
		0, 0, /* No default value */
		"warningMessageSegmentNumber-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType12_r9, warningMessageSegment_r9),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"warningMessageSegment-r9"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType12_r9, dataCodingScheme_r9),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_dataCodingScheme_r9_constr_9,  memb_dataCodingScheme_r9_constraint_1 },
		0, 0, /* No default value */
		"dataCodingScheme-r9"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType12_r9, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType12_r9, warningAreaCoordinatesSegment_r15),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"warningAreaCoordinatesSegment-r15"
		},
};
static const int asn_MAP_SystemInformationBlockType12_r9_oms_1[] = { 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType12_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType12_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* messageIdentifier-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* serialNumber-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* warningMessageSegmentType-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* warningMessageSegmentNumber-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* warningMessageSegment-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* dataCodingScheme-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* warningAreaCoordinatesSegment-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType12_r9_specs_1 = {
	sizeof(struct SystemInformationBlockType12_r9),
	offsetof(struct SystemInformationBlockType12_r9, _asn_ctx),
	asn_MAP_SystemInformationBlockType12_r9_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType12_r9_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType12_r9 = {
	"SystemInformationBlockType12-r9",
	"SystemInformationBlockType12-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType12_r9_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType12_r9_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType12_r9_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType12_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType12_r9_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType12_r9_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType12_r9_1,
	8,	/* Elements count */
	&asn_SPC_SystemInformationBlockType12_r9_specs_1	/* Additional specs */
};

