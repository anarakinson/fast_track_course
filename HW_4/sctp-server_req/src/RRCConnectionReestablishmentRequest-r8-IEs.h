/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCConnectionReestablishmentRequest_r8_IEs_H_
#define	_RRCConnectionReestablishmentRequest_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ReestabUE-Identity.h"
#include "ReestablishmentCause.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRCConnectionReestablishmentRequest-r8-IEs */
typedef struct RRCConnectionReestablishmentRequest_r8_IEs {
	ReestabUE_Identity_t	 ue_Identity;
	ReestablishmentCause_t	 reestablishmentCause;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReestablishmentRequest_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReestablishmentRequest_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReestablishmentRequest_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReestablishmentRequest_r8_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReestablishmentRequest_r8_IEs_H_ */
#include <asn_internal.h>