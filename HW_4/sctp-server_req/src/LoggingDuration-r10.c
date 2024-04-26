/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "LoggingDuration-r10.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_LoggingDuration_r10_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LoggingDuration_r10_value2enum_1[] = {
	{ 0,	5,	"min10" },
	{ 1,	5,	"min20" },
	{ 2,	5,	"min40" },
	{ 3,	5,	"min60" },
	{ 4,	5,	"min90" },
	{ 5,	6,	"min120" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_LoggingDuration_r10_enum2value_1[] = {
	0,	/* min10(0) */
	5,	/* min120(5) */
	1,	/* min20(1) */
	2,	/* min40(2) */
	3,	/* min60(3) */
	4,	/* min90(4) */
	7,	/* spare1(7) */
	6	/* spare2(6) */
};
const asn_INTEGER_specifics_t asn_SPC_LoggingDuration_r10_specs_1 = {
	asn_MAP_LoggingDuration_r10_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LoggingDuration_r10_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LoggingDuration_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LoggingDuration_r10 = {
	"LoggingDuration-r10",
	"LoggingDuration-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_LoggingDuration_r10_tags_1,
	sizeof(asn_DEF_LoggingDuration_r10_tags_1)
		/sizeof(asn_DEF_LoggingDuration_r10_tags_1[0]), /* 1 */
	asn_DEF_LoggingDuration_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_LoggingDuration_r10_tags_1)
		/sizeof(asn_DEF_LoggingDuration_r10_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_LoggingDuration_r10_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LoggingDuration_r10_specs_1	/* Additional specs */
};
