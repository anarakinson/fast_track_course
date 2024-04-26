/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCConnectionReestablishmentRequest_H_
#define	_RRCConnectionReestablishmentRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRCConnectionReestablishmentRequest-r8-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReestablishmentRequest__criticalExtensions_PR {
	RRCConnectionReestablishmentRequest__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionReestablishmentRequest__criticalExtensions_PR_rrcConnectionReestablishmentRequest_r8,
	RRCConnectionReestablishmentRequest__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionReestablishmentRequest__criticalExtensions_PR;

/* RRCConnectionReestablishmentRequest */
typedef struct RRCConnectionReestablishmentRequest {
	struct RRCConnectionReestablishmentRequest__criticalExtensions {
		RRCConnectionReestablishmentRequest__criticalExtensions_PR present;
		union RRCConnectionReestablishmentRequest__criticalExtensions_u {
			RRCConnectionReestablishmentRequest_r8_IEs_t	 rrcConnectionReestablishmentRequest_r8;
			struct RRCConnectionReestablishmentRequest__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReestablishmentRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReestablishmentRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReestablishmentRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReestablishmentRequest_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReestablishmentRequest_H_ */
#include <asn_internal.h>
