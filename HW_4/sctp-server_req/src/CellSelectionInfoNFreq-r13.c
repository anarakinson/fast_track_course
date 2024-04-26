/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CellSelectionInfoNFreq-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_q_RxLevMinOffset_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_q_Hyst_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_q_RxLevMinOffset_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_q_Hyst_r13_value2enum_4[] = {
	{ 0,	3,	"dB0" },
	{ 1,	3,	"dB1" },
	{ 2,	3,	"dB2" },
	{ 3,	3,	"dB3" },
	{ 4,	3,	"dB4" },
	{ 5,	3,	"dB5" },
	{ 6,	3,	"dB6" },
	{ 7,	3,	"dB8" },
	{ 8,	4,	"dB10" },
	{ 9,	4,	"dB12" },
	{ 10,	4,	"dB14" },
	{ 11,	4,	"dB16" },
	{ 12,	4,	"dB18" },
	{ 13,	4,	"dB20" },
	{ 14,	4,	"dB22" },
	{ 15,	4,	"dB24" }
};
static const unsigned int asn_MAP_q_Hyst_r13_enum2value_4[] = {
	0,	/* dB0(0) */
	1,	/* dB1(1) */
	8,	/* dB10(8) */
	9,	/* dB12(9) */
	10,	/* dB14(10) */
	11,	/* dB16(11) */
	12,	/* dB18(12) */
	2,	/* dB2(2) */
	13,	/* dB20(13) */
	14,	/* dB22(14) */
	15,	/* dB24(15) */
	3,	/* dB3(3) */
	4,	/* dB4(4) */
	5,	/* dB5(5) */
	6,	/* dB6(6) */
	7	/* dB8(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_q_Hyst_r13_specs_4 = {
	asn_MAP_q_Hyst_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_q_Hyst_r13_enum2value_4,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_q_Hyst_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_q_Hyst_r13_4 = {
	"q-Hyst-r13",
	"q-Hyst-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_q_Hyst_r13_tags_4,
	sizeof(asn_DEF_q_Hyst_r13_tags_4)
		/sizeof(asn_DEF_q_Hyst_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_q_Hyst_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_q_Hyst_r13_tags_4)
		/sizeof(asn_DEF_q_Hyst_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_q_Hyst_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_q_Hyst_r13_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CellSelectionInfoNFreq_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectionInfoNFreq_r13, q_RxLevMin_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxLevMin,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-RxLevMin-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct CellSelectionInfoNFreq_r13, q_RxLevMinOffset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_q_RxLevMinOffset_constr_3,  memb_q_RxLevMinOffset_constraint_1 },
		0, 0, /* No default value */
		"q-RxLevMinOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectionInfoNFreq_r13, q_Hyst_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_q_Hyst_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-Hyst-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectionInfoNFreq_r13, q_RxLevMinReselection_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxLevMin,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-RxLevMinReselection-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectionInfoNFreq_r13, t_ReselectionEUTRA_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_Reselection,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-ReselectionEUTRA-r13"
		},
};
static const int asn_MAP_CellSelectionInfoNFreq_r13_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_CellSelectionInfoNFreq_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CellSelectionInfoNFreq_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* q-RxLevMin-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* q-RxLevMinOffset */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* q-Hyst-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* q-RxLevMinReselection-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* t-ReselectionEUTRA-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_CellSelectionInfoNFreq_r13_specs_1 = {
	sizeof(struct CellSelectionInfoNFreq_r13),
	offsetof(struct CellSelectionInfoNFreq_r13, _asn_ctx),
	asn_MAP_CellSelectionInfoNFreq_r13_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_CellSelectionInfoNFreq_r13_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CellSelectionInfoNFreq_r13 = {
	"CellSelectionInfoNFreq-r13",
	"CellSelectionInfoNFreq-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_CellSelectionInfoNFreq_r13_tags_1,
	sizeof(asn_DEF_CellSelectionInfoNFreq_r13_tags_1)
		/sizeof(asn_DEF_CellSelectionInfoNFreq_r13_tags_1[0]), /* 1 */
	asn_DEF_CellSelectionInfoNFreq_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellSelectionInfoNFreq_r13_tags_1)
		/sizeof(asn_DEF_CellSelectionInfoNFreq_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CellSelectionInfoNFreq_r13_1,
	5,	/* Elements count */
	&asn_SPC_CellSelectionInfoNFreq_r13_specs_1	/* Additional specs */
};

