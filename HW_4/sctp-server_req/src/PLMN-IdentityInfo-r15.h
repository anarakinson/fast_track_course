/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PLMN_IdentityInfo_r15_H_
#define	_PLMN_IdentityInfo_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "PLMN-Identity.h"
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PLMN_IdentityInfo_r15__plmn_Identity_5GC_r15_PR {
	PLMN_IdentityInfo_r15__plmn_Identity_5GC_r15_PR_NOTHING,	/* No components present */
	PLMN_IdentityInfo_r15__plmn_Identity_5GC_r15_PR_plmn_Identity_r15,
	PLMN_IdentityInfo_r15__plmn_Identity_5GC_r15_PR_plmn_Index_r15
} PLMN_IdentityInfo_r15__plmn_Identity_5GC_r15_PR;
typedef enum PLMN_IdentityInfo_r15__cellReservedForOperatorUse_r15 {
	PLMN_IdentityInfo_r15__cellReservedForOperatorUse_r15_reserved	= 0,
	PLMN_IdentityInfo_r15__cellReservedForOperatorUse_r15_notReserved	= 1
} e_PLMN_IdentityInfo_r15__cellReservedForOperatorUse_r15;
typedef enum PLMN_IdentityInfo_r15__cellReservedForOperatorUse_CRS_r15 {
	PLMN_IdentityInfo_r15__cellReservedForOperatorUse_CRS_r15_reserved	= 0,
	PLMN_IdentityInfo_r15__cellReservedForOperatorUse_CRS_r15_notReserved	= 1
} e_PLMN_IdentityInfo_r15__cellReservedForOperatorUse_CRS_r15;

/* PLMN-IdentityInfo-r15 */
typedef struct PLMN_IdentityInfo_r15 {
	struct PLMN_IdentityInfo_r15__plmn_Identity_5GC_r15 {
		PLMN_IdentityInfo_r15__plmn_Identity_5GC_r15_PR present;
		union PLMN_IdentityInfo_r15__plmn_Identity_5GC_r15_u {
			PLMN_Identity_t	 plmn_Identity_r15;
			long	 plmn_Index_r15;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} plmn_Identity_5GC_r15;
	long	 cellReservedForOperatorUse_r15;
	long	 cellReservedForOperatorUse_CRS_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMN_IdentityInfo_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cellReservedForOperatorUse_r15_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cellReservedForOperatorUse_CRS_r15_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_IdentityInfo_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_PLMN_IdentityInfo_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_PLMN_IdentityInfo_r15_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PLMN_IdentityInfo_r15_H_ */
#include <asn_internal.h>
