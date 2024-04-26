/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "MAC-Parameters-v1310.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_extendedMAC_LengthField_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_extendedLongDRX_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_extendedMAC_LengthField_r13_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_extendedMAC_LengthField_r13_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_extendedMAC_LengthField_r13_specs_2 = {
	asn_MAP_extendedMAC_LengthField_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_extendedMAC_LengthField_r13_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_extendedMAC_LengthField_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_extendedMAC_LengthField_r13_2 = {
	"extendedMAC-LengthField-r13",
	"extendedMAC-LengthField-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_extendedMAC_LengthField_r13_tags_2,
	sizeof(asn_DEF_extendedMAC_LengthField_r13_tags_2)
		/sizeof(asn_DEF_extendedMAC_LengthField_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_extendedMAC_LengthField_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_extendedMAC_LengthField_r13_tags_2)
		/sizeof(asn_DEF_extendedMAC_LengthField_r13_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_extendedMAC_LengthField_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_extendedMAC_LengthField_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_extendedLongDRX_r13_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_extendedLongDRX_r13_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_extendedLongDRX_r13_specs_4 = {
	asn_MAP_extendedLongDRX_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_extendedLongDRX_r13_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_extendedLongDRX_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_extendedLongDRX_r13_4 = {
	"extendedLongDRX-r13",
	"extendedLongDRX-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_extendedLongDRX_r13_tags_4,
	sizeof(asn_DEF_extendedLongDRX_r13_tags_4)
		/sizeof(asn_DEF_extendedLongDRX_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_extendedLongDRX_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_extendedLongDRX_r13_tags_4)
		/sizeof(asn_DEF_extendedLongDRX_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_extendedLongDRX_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_extendedLongDRX_r13_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MAC_Parameters_v1310_1[] = {
	{ ATF_POINTER, 2, offsetof(struct MAC_Parameters_v1310, extendedMAC_LengthField_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_extendedMAC_LengthField_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"extendedMAC-LengthField-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct MAC_Parameters_v1310, extendedLongDRX_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_extendedLongDRX_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"extendedLongDRX-r13"
		},
};
static const int asn_MAP_MAC_Parameters_v1310_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_MAC_Parameters_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MAC_Parameters_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* extendedMAC-LengthField-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* extendedLongDRX-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_MAC_Parameters_v1310_specs_1 = {
	sizeof(struct MAC_Parameters_v1310),
	offsetof(struct MAC_Parameters_v1310, _asn_ctx),
	asn_MAP_MAC_Parameters_v1310_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MAC_Parameters_v1310_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MAC_Parameters_v1310 = {
	"MAC-Parameters-v1310",
	"MAC-Parameters-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_MAC_Parameters_v1310_tags_1,
	sizeof(asn_DEF_MAC_Parameters_v1310_tags_1)
		/sizeof(asn_DEF_MAC_Parameters_v1310_tags_1[0]), /* 1 */
	asn_DEF_MAC_Parameters_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_MAC_Parameters_v1310_tags_1)
		/sizeof(asn_DEF_MAC_Parameters_v1310_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MAC_Parameters_v1310_1,
	2,	/* Elements count */
	&asn_SPC_MAC_Parameters_v1310_specs_1	/* Additional specs */
};

