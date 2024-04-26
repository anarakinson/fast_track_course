/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PosSystemInformation_r15_IEs_H_
#define	_PosSystemInformation_r15_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <asn_SEQUENCE_OF.h>
#include "SystemInformationBlockPos-r15.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR {
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_NOTHING,	/* No components present */
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib1_1_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib1_2_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib1_3_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib1_4_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib1_5_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib1_6_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib1_7_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib2_1_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib2_2_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib2_3_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib2_4_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib2_5_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib2_6_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib2_7_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib2_8_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib2_9_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib2_10_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib2_11_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib2_12_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib2_13_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib2_14_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib2_15_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib2_16_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib2_17_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib2_18_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib2_19_r15,
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR_posSib3_1_r15
	/* Extensions may appear below */
	
} PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR;

/* Forward definitions */
typedef struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member {
	PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_PR present;
	union PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member_u {
		SystemInformationBlockPos_r15_t	 posSib1_1_r15;
		SystemInformationBlockPos_r15_t	 posSib1_2_r15;
		SystemInformationBlockPos_r15_t	 posSib1_3_r15;
		SystemInformationBlockPos_r15_t	 posSib1_4_r15;
		SystemInformationBlockPos_r15_t	 posSib1_5_r15;
		SystemInformationBlockPos_r15_t	 posSib1_6_r15;
		SystemInformationBlockPos_r15_t	 posSib1_7_r15;
		SystemInformationBlockPos_r15_t	 posSib2_1_r15;
		SystemInformationBlockPos_r15_t	 posSib2_2_r15;
		SystemInformationBlockPos_r15_t	 posSib2_3_r15;
		SystemInformationBlockPos_r15_t	 posSib2_4_r15;
		SystemInformationBlockPos_r15_t	 posSib2_5_r15;
		SystemInformationBlockPos_r15_t	 posSib2_6_r15;
		SystemInformationBlockPos_r15_t	 posSib2_7_r15;
		SystemInformationBlockPos_r15_t	 posSib2_8_r15;
		SystemInformationBlockPos_r15_t	 posSib2_9_r15;
		SystemInformationBlockPos_r15_t	 posSib2_10_r15;
		SystemInformationBlockPos_r15_t	 posSib2_11_r15;
		SystemInformationBlockPos_r15_t	 posSib2_12_r15;
		SystemInformationBlockPos_r15_t	 posSib2_13_r15;
		SystemInformationBlockPos_r15_t	 posSib2_14_r15;
		SystemInformationBlockPos_r15_t	 posSib2_15_r15;
		SystemInformationBlockPos_r15_t	 posSib2_16_r15;
		SystemInformationBlockPos_r15_t	 posSib2_17_r15;
		SystemInformationBlockPos_r15_t	 posSib2_18_r15;
		SystemInformationBlockPos_r15_t	 posSib2_19_r15;
		SystemInformationBlockPos_r15_t	 posSib3_1_r15;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member;

/* PosSystemInformation-r15-IEs */
typedef struct PosSystemInformation_r15_IEs {
	struct PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15 {
		A_SEQUENCE_OF(PosSystemInformation_r15_IEs__posSIB_TypeAndInfo_r15__Member) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} posSIB_TypeAndInfo_r15;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct PosSystemInformation_r15_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PosSystemInformation_r15_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PosSystemInformation_r15_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_PosSystemInformation_r15_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_PosSystemInformation_r15_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PosSystemInformation_r15_IEs_H_ */
#include <asn_internal.h>
