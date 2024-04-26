/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_DLInformationTransfer_r15_IEs_H_
#define	_DLInformationTransfer_r15_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DedicatedInfoNAS.h"
#include "DedicatedInfoCDMA2000.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DLInformationTransfer_r15_IEs__dedicatedInfoType_r15_PR {
	DLInformationTransfer_r15_IEs__dedicatedInfoType_r15_PR_NOTHING,	/* No components present */
	DLInformationTransfer_r15_IEs__dedicatedInfoType_r15_PR_dedicatedInfoNAS_r15,
	DLInformationTransfer_r15_IEs__dedicatedInfoType_r15_PR_dedicatedInfoCDMA2000_1XRTT_r15,
	DLInformationTransfer_r15_IEs__dedicatedInfoType_r15_PR_dedicatedInfoCDMA2000_HRPD_r15
} DLInformationTransfer_r15_IEs__dedicatedInfoType_r15_PR;

/* Forward declarations */
struct TimeReferenceInfo_r15;
struct DLInformationTransfer_v8a0_IEs;

/* DLInformationTransfer-r15-IEs */
typedef struct DLInformationTransfer_r15_IEs {
	struct DLInformationTransfer_r15_IEs__dedicatedInfoType_r15 {
		DLInformationTransfer_r15_IEs__dedicatedInfoType_r15_PR present;
		union DLInformationTransfer_r15_IEs__dedicatedInfoType_r15_u {
			DedicatedInfoNAS_t	 dedicatedInfoNAS_r15;
			DedicatedInfoCDMA2000_t	 dedicatedInfoCDMA2000_1XRTT_r15;
			DedicatedInfoCDMA2000_t	 dedicatedInfoCDMA2000_HRPD_r15;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dedicatedInfoType_r15;
	struct TimeReferenceInfo_r15	*timeReferenceInfo_r15	/* OPTIONAL */;
	struct DLInformationTransfer_v8a0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DLInformationTransfer_r15_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DLInformationTransfer_r15_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_DLInformationTransfer_r15_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_DLInformationTransfer_r15_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _DLInformationTransfer_r15_IEs_H_ */
#include <asn_internal.h>