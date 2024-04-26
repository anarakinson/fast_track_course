/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "DRB-CountMSB-InfoList.h"

#include "DRB-CountMSB-Info.h"
asn_per_constraints_t asn_PER_type_DRB_CountMSB_InfoList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  11 }	/* (SIZE(1..11)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_DRB_CountMSB_InfoList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_DRB_CountMSB_Info,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_DRB_CountMSB_InfoList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_DRB_CountMSB_InfoList_specs_1 = {
	sizeof(struct DRB_CountMSB_InfoList),
	offsetof(struct DRB_CountMSB_InfoList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_DRB_CountMSB_InfoList = {
	"DRB-CountMSB-InfoList",
	"DRB-CountMSB-InfoList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_DRB_CountMSB_InfoList_tags_1,
	sizeof(asn_DEF_DRB_CountMSB_InfoList_tags_1)
		/sizeof(asn_DEF_DRB_CountMSB_InfoList_tags_1[0]), /* 1 */
	asn_DEF_DRB_CountMSB_InfoList_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRB_CountMSB_InfoList_tags_1)
		/sizeof(asn_DEF_DRB_CountMSB_InfoList_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_DRB_CountMSB_InfoList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_DRB_CountMSB_InfoList_1,
	1,	/* Single element */
	&asn_SPC_DRB_CountMSB_InfoList_specs_1	/* Additional specs */
};

