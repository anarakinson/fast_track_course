/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_NAICS_AssistanceInfo_r12_H_
#define	_NAICS_AssistanceInfo_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "P-a.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NAICS_AssistanceInfo_r12_PR {
	NAICS_AssistanceInfo_r12_PR_NOTHING,	/* No components present */
	NAICS_AssistanceInfo_r12_PR_release,
	NAICS_AssistanceInfo_r12_PR_setup
} NAICS_AssistanceInfo_r12_PR;

/* Forward declarations */
struct NeighCellsToReleaseList_r12;
struct NeighCellsToAddModList_r12;

/* NAICS-AssistanceInfo-r12 */
typedef struct NAICS_AssistanceInfo_r12 {
	NAICS_AssistanceInfo_r12_PR present;
	union NAICS_AssistanceInfo_r12_u {
		NULL_t	 release;
		struct NAICS_AssistanceInfo_r12__setup {
			struct NeighCellsToReleaseList_r12	*neighCellsToReleaseList_r12	/* OPTIONAL */;
			struct NeighCellsToAddModList_r12	*neighCellsToAddModList_r12	/* OPTIONAL */;
			P_a_t	*servCellp_a_r12	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NAICS_AssistanceInfo_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NAICS_AssistanceInfo_r12;
extern asn_CHOICE_specifics_t asn_SPC_NAICS_AssistanceInfo_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_NAICS_AssistanceInfo_r12_1[2];
extern asn_per_constraints_t asn_PER_type_NAICS_AssistanceInfo_r12_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NAICS_AssistanceInfo_r12_H_ */
#include <asn_internal.h>
