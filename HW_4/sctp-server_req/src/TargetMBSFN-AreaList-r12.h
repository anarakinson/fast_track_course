/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_TargetMBSFN_AreaList_r12_H_
#define	_TargetMBSFN_AreaList_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TargetMBSFN_Area_r12;

/* TargetMBSFN-AreaList-r12 */
typedef struct TargetMBSFN_AreaList_r12 {
	A_SEQUENCE_OF(struct TargetMBSFN_Area_r12) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TargetMBSFN_AreaList_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TargetMBSFN_AreaList_r12;
extern asn_SET_OF_specifics_t asn_SPC_TargetMBSFN_AreaList_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_TargetMBSFN_AreaList_r12_1[1];
extern asn_per_constraints_t asn_PER_type_TargetMBSFN_AreaList_r12_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _TargetMBSFN_AreaList_r12_H_ */
#include <asn_internal.h>
