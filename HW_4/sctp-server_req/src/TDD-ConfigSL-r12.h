/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_TDD_ConfigSL_r12_H_
#define	_TDD_ConfigSL_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TDD_ConfigSL_r12__subframeAssignmentSL_r12 {
	TDD_ConfigSL_r12__subframeAssignmentSL_r12_none	= 0,
	TDD_ConfigSL_r12__subframeAssignmentSL_r12_sa0	= 1,
	TDD_ConfigSL_r12__subframeAssignmentSL_r12_sa1	= 2,
	TDD_ConfigSL_r12__subframeAssignmentSL_r12_sa2	= 3,
	TDD_ConfigSL_r12__subframeAssignmentSL_r12_sa3	= 4,
	TDD_ConfigSL_r12__subframeAssignmentSL_r12_sa4	= 5,
	TDD_ConfigSL_r12__subframeAssignmentSL_r12_sa5	= 6,
	TDD_ConfigSL_r12__subframeAssignmentSL_r12_sa6	= 7
} e_TDD_ConfigSL_r12__subframeAssignmentSL_r12;

/* TDD-ConfigSL-r12 */
typedef struct TDD_ConfigSL_r12 {
	long	 subframeAssignmentSL_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TDD_ConfigSL_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_subframeAssignmentSL_r12_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_TDD_ConfigSL_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_TDD_ConfigSL_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_TDD_ConfigSL_r12_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _TDD_ConfigSL_r12_H_ */
#include <asn_internal.h>
