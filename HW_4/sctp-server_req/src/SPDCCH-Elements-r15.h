/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SPDCCH_Elements_r15_H_
#define	_SPDCCH_Elements_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include "DCI7-Candidates-r15.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SPDCCH_Elements_r15_PR {
	SPDCCH_Elements_r15_PR_NOTHING,	/* No components present */
	SPDCCH_Elements_r15_PR_release,
	SPDCCH_Elements_r15_PR_setup
} SPDCCH_Elements_r15_PR;
typedef enum SPDCCH_Elements_r15__setup__spdcch_SetReferenceSig_r15 {
	SPDCCH_Elements_r15__setup__spdcch_SetReferenceSig_r15_crs	= 0,
	SPDCCH_Elements_r15__setup__spdcch_SetReferenceSig_r15_dmrs	= 1
} e_SPDCCH_Elements_r15__setup__spdcch_SetReferenceSig_r15;
typedef enum SPDCCH_Elements_r15__setup__transmissionType_r15 {
	SPDCCH_Elements_r15__setup__transmissionType_r15_localised	= 0,
	SPDCCH_Elements_r15__setup__transmissionType_r15_distributed	= 1
} e_SPDCCH_Elements_r15__setup__transmissionType_r15;
typedef enum SPDCCH_Elements_r15__setup__subframeType_r15 {
	SPDCCH_Elements_r15__setup__subframeType_r15_mbsfn	= 0,
	SPDCCH_Elements_r15__setup__subframeType_r15_nonmbsfn	= 1,
	SPDCCH_Elements_r15__setup__subframeType_r15_all	= 2
} e_SPDCCH_Elements_r15__setup__subframeType_r15;
typedef enum SPDCCH_Elements_r15__setup__rateMatchingMode_r15 {
	SPDCCH_Elements_r15__setup__rateMatchingMode_r15_m1	= 0,
	SPDCCH_Elements_r15__setup__rateMatchingMode_r15_m2	= 1,
	SPDCCH_Elements_r15__setup__rateMatchingMode_r15_m3	= 2,
	SPDCCH_Elements_r15__setup__rateMatchingMode_r15_m4	= 3
} e_SPDCCH_Elements_r15__setup__rateMatchingMode_r15;

/* Forward declarations */
struct DCI7_CandidatesPerAL_SPDCCH_r15;

/* SPDCCH-Elements-r15 */
typedef struct SPDCCH_Elements_r15 {
	SPDCCH_Elements_r15_PR present;
	union SPDCCH_Elements_r15_u {
		NULL_t	 release;
		struct SPDCCH_Elements_r15__setup {
			long	*spdcch_SetConfigId_r15	/* OPTIONAL */;
			long	*spdcch_SetReferenceSig_r15	/* OPTIONAL */;
			long	*transmissionType_r15	/* OPTIONAL */;
			long	*spdcch_NoOfSymbols_r15	/* OPTIONAL */;
			long	*dmrs_ScramblingSequenceInt_r15	/* OPTIONAL */;
			struct SPDCCH_Elements_r15__setup__dci7_CandidatesPerAL_PDCCH_r15 {
				A_SEQUENCE_OF(DCI7_Candidates_r15_t) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *dci7_CandidatesPerAL_PDCCH_r15;
			struct SPDCCH_Elements_r15__setup__dci7_CandidateSetsPerAL_SPDCCH_r15 {
				A_SEQUENCE_OF(struct DCI7_CandidatesPerAL_SPDCCH_r15) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *dci7_CandidateSetsPerAL_SPDCCH_r15;
			struct SPDCCH_Elements_r15__setup__resourceBlockAssignment_r15 {
				long	 numberRB_InFreq_domain_r15;
				BIT_STRING_t	 resourceBlockAssignment_r15;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *resourceBlockAssignment_r15;
			BIT_STRING_t	*subslotApplicability_r15	/* OPTIONAL */;
			struct SPDCCH_Elements_r15__setup__al_StartingPointSPDCCH_r15 {
				A_SEQUENCE_OF(long) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *al_StartingPointSPDCCH_r15;
			long	*subframeType_r15	/* OPTIONAL */;
			long	*rateMatchingMode_r15	/* OPTIONAL */;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SPDCCH_Elements_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_spdcch_SetReferenceSig_r15_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_transmissionType_r15_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_subframeType_r15_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rateMatchingMode_r15_27;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SPDCCH_Elements_r15;
extern asn_CHOICE_specifics_t asn_SPC_SPDCCH_Elements_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SPDCCH_Elements_r15_1[2];
extern asn_per_constraints_t asn_PER_type_SPDCCH_Elements_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SPDCCH_Elements_r15_H_ */
#include <asn_internal.h>
