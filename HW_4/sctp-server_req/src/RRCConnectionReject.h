/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCConnectionReject_H_
#define	_RRCConnectionReject_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRCConnectionReject-r8-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReject__criticalExtensions_PR {
	RRCConnectionReject__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionReject__criticalExtensions_PR_c1,
	RRCConnectionReject__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionReject__criticalExtensions_PR;
typedef enum RRCConnectionReject__criticalExtensions__c1_PR {
	RRCConnectionReject__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	RRCConnectionReject__criticalExtensions__c1_PR_rrcConnectionReject_r8,
	RRCConnectionReject__criticalExtensions__c1_PR_spare3,
	RRCConnectionReject__criticalExtensions__c1_PR_spare2,
	RRCConnectionReject__criticalExtensions__c1_PR_spare1
} RRCConnectionReject__criticalExtensions__c1_PR;

/* RRCConnectionReject */
typedef struct RRCConnectionReject {
	struct RRCConnectionReject__criticalExtensions {
		RRCConnectionReject__criticalExtensions_PR present;
		union RRCConnectionReject__criticalExtensions_u {
			struct RRCConnectionReject__criticalExtensions__c1 {
				RRCConnectionReject__criticalExtensions__c1_PR present;
				union RRCConnectionReject__criticalExtensions__c1_u {
					RRCConnectionReject_r8_IEs_t	 rrcConnectionReject_r8;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct RRCConnectionReject__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReject_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReject;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReject_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReject_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReject_H_ */
#include <asn_internal.h>
