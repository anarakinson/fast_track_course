/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SCellToAddModListSCG-r12.h"

#include "Cell-ToAddMod-r12.h"
asn_per_constraints_t asn_PER_type_SCellToAddModListSCG_r12_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_SCellToAddModListSCG_r12_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Cell_ToAddMod_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_SCellToAddModListSCG_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_SCellToAddModListSCG_r12_specs_1 = {
	sizeof(struct SCellToAddModListSCG_r12),
	offsetof(struct SCellToAddModListSCG_r12, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_SCellToAddModListSCG_r12 = {
	"SCellToAddModListSCG-r12",
	"SCellToAddModListSCG-r12",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_SCellToAddModListSCG_r12_tags_1,
	sizeof(asn_DEF_SCellToAddModListSCG_r12_tags_1)
		/sizeof(asn_DEF_SCellToAddModListSCG_r12_tags_1[0]), /* 1 */
	asn_DEF_SCellToAddModListSCG_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCellToAddModListSCG_r12_tags_1)
		/sizeof(asn_DEF_SCellToAddModListSCG_r12_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_SCellToAddModListSCG_r12_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_SCellToAddModListSCG_r12_1,
	1,	/* Single element */
	&asn_SPC_SCellToAddModListSCG_r12_specs_1	/* Additional specs */
};

