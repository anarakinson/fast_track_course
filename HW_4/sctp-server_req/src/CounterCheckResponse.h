/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CounterCheckResponse_H_
#define	_CounterCheckResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "CounterCheckResponse-r8-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CounterCheckResponse__criticalExtensions_PR {
	CounterCheckResponse__criticalExtensions_PR_NOTHING,	/* No components present */
	CounterCheckResponse__criticalExtensions_PR_counterCheckResponse_r8,
	CounterCheckResponse__criticalExtensions_PR_criticalExtensionsFuture
} CounterCheckResponse__criticalExtensions_PR;

/* CounterCheckResponse */
typedef struct CounterCheckResponse {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct CounterCheckResponse__criticalExtensions {
		CounterCheckResponse__criticalExtensions_PR present;
		union CounterCheckResponse__criticalExtensions_u {
			CounterCheckResponse_r8_IEs_t	 counterCheckResponse_r8;
			struct CounterCheckResponse__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CounterCheckResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CounterCheckResponse;
extern asn_SEQUENCE_specifics_t asn_SPC_CounterCheckResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_CounterCheckResponse_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CounterCheckResponse_H_ */
#include <asn_internal.h>
