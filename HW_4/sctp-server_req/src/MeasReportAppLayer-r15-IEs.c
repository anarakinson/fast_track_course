/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "MeasReportAppLayer-r15-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_measReportAppLayerContainer_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_serviceType_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_measReportAppLayerContainer_r15_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 13,  13,  1,  8000 }	/* (SIZE(1..8000)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_serviceType_value2enum_3[] = {
	{ 0,	3,	"qoe" },
	{ 1,	7,	"qoemtsi" },
	{ 2,	6,	"spare6" },
	{ 3,	6,	"spare5" },
	{ 4,	6,	"spare4" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_serviceType_enum2value_3[] = {
	0,	/* qoe(0) */
	1,	/* qoemtsi(1) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5,	/* spare3(5) */
	4,	/* spare4(4) */
	3,	/* spare5(3) */
	2	/* spare6(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_serviceType_specs_3 = {
	asn_MAP_serviceType_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_serviceType_enum2value_3,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_serviceType_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_serviceType_3 = {
	"serviceType",
	"serviceType",
	&asn_OP_NativeEnumerated,
	asn_DEF_serviceType_tags_3,
	sizeof(asn_DEF_serviceType_tags_3)
		/sizeof(asn_DEF_serviceType_tags_3[0]) - 1, /* 1 */
	asn_DEF_serviceType_tags_3,	/* Same as above */
	sizeof(asn_DEF_serviceType_tags_3)
		/sizeof(asn_DEF_serviceType_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_serviceType_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_serviceType_specs_3	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_12 = {
	sizeof(struct MeasReportAppLayer_r15_IEs__nonCriticalExtension),
	offsetof(struct MeasReportAppLayer_r15_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_12 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_12,
	sizeof(asn_DEF_nonCriticalExtension_tags_12)
		/sizeof(asn_DEF_nonCriticalExtension_tags_12[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_12,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_12)
		/sizeof(asn_DEF_nonCriticalExtension_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasReportAppLayer_r15_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct MeasReportAppLayer_r15_IEs, measReportAppLayerContainer_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_measReportAppLayerContainer_r15_constr_2,  memb_measReportAppLayerContainer_r15_constraint_1 },
		0, 0, /* No default value */
		"measReportAppLayerContainer-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasReportAppLayer_r15_IEs, serviceType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_serviceType_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"serviceType"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasReportAppLayer_r15_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_MeasReportAppLayer_r15_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_MeasReportAppLayer_r15_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasReportAppLayer_r15_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measReportAppLayerContainer-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* serviceType */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasReportAppLayer_r15_IEs_specs_1 = {
	sizeof(struct MeasReportAppLayer_r15_IEs),
	offsetof(struct MeasReportAppLayer_r15_IEs, _asn_ctx),
	asn_MAP_MeasReportAppLayer_r15_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MeasReportAppLayer_r15_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasReportAppLayer_r15_IEs = {
	"MeasReportAppLayer-r15-IEs",
	"MeasReportAppLayer-r15-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasReportAppLayer_r15_IEs_tags_1,
	sizeof(asn_DEF_MeasReportAppLayer_r15_IEs_tags_1)
		/sizeof(asn_DEF_MeasReportAppLayer_r15_IEs_tags_1[0]), /* 1 */
	asn_DEF_MeasReportAppLayer_r15_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasReportAppLayer_r15_IEs_tags_1)
		/sizeof(asn_DEF_MeasReportAppLayer_r15_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasReportAppLayer_r15_IEs_1,
	3,	/* Elements count */
	&asn_SPC_MeasReportAppLayer_r15_IEs_specs_1	/* Additional specs */
};

