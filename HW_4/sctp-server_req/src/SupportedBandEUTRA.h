/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SupportedBandEUTRA_H_
#define	_SupportedBandEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicator.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SupportedBandEUTRA */
typedef struct SupportedBandEUTRA {
	FreqBandIndicator_t	 bandEUTRA;
	BOOLEAN_t	 halfDuplex;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBandEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_SupportedBandEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_SupportedBandEUTRA_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedBandEUTRA_H_ */
#include <asn_internal.h>
