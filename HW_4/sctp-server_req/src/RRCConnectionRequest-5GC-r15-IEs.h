/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCConnectionRequest_5GC_r15_IEs_H_
#define	_RRCConnectionRequest_5GC_r15_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InitialUE-Identity-5GC.h"
#include "EstablishmentCause-5GC.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRCConnectionRequest-5GC-r15-IEs */
typedef struct RRCConnectionRequest_5GC_r15_IEs {
	InitialUE_Identity_5GC_t	 ue_Identity;
	EstablishmentCause_5GC_t	 establishmentCause;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionRequest_5GC_r15_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionRequest_5GC_r15_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionRequest_5GC_r15_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionRequest_5GC_r15_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionRequest_5GC_r15_IEs_H_ */
#include <asn_internal.h>
