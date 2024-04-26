/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_DLInformationTransfer_H_
#define	_DLInformationTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "DLInformationTransfer-r8-IEs.h"
#include "DLInformationTransfer-r15-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DLInformationTransfer__criticalExtensions_PR {
	DLInformationTransfer__criticalExtensions_PR_NOTHING,	/* No components present */
	DLInformationTransfer__criticalExtensions_PR_c1,
	DLInformationTransfer__criticalExtensions_PR_criticalExtensionsFuture
} DLInformationTransfer__criticalExtensions_PR;
typedef enum DLInformationTransfer__criticalExtensions__c1_PR {
	DLInformationTransfer__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	DLInformationTransfer__criticalExtensions__c1_PR_dlInformationTransfer_r8,
	DLInformationTransfer__criticalExtensions__c1_PR_dlInformationTransfer_r15,
	DLInformationTransfer__criticalExtensions__c1_PR_spare2,
	DLInformationTransfer__criticalExtensions__c1_PR_spare1
} DLInformationTransfer__criticalExtensions__c1_PR;

/* DLInformationTransfer */
typedef struct DLInformationTransfer {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct DLInformationTransfer__criticalExtensions {
		DLInformationTransfer__criticalExtensions_PR present;
		union DLInformationTransfer__criticalExtensions_u {
			struct DLInformationTransfer__criticalExtensions__c1 {
				DLInformationTransfer__criticalExtensions__c1_PR present;
				union DLInformationTransfer__criticalExtensions__c1_u {
					DLInformationTransfer_r8_IEs_t	 dlInformationTransfer_r8;
					DLInformationTransfer_r15_IEs_t	 dlInformationTransfer_r15;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct DLInformationTransfer__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DLInformationTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DLInformationTransfer;
extern asn_SEQUENCE_specifics_t asn_SPC_DLInformationTransfer_specs_1;
extern asn_TYPE_member_t asn_MBR_DLInformationTransfer_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _DLInformationTransfer_H_ */
#include <asn_internal.h>
