/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_WUS_ConfigPerCarrier_NB_r15_H_
#define	_WUS_ConfigPerCarrier_NB_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "WUS-MaxDurationFactor-NB-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* WUS-ConfigPerCarrier-NB-r15 */
typedef struct WUS_ConfigPerCarrier_NB_r15 {
	WUS_MaxDurationFactor_NB_r15_t	 maxDurationFactor_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WUS_ConfigPerCarrier_NB_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WUS_ConfigPerCarrier_NB_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_WUS_ConfigPerCarrier_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_WUS_ConfigPerCarrier_NB_r15_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _WUS_ConfigPerCarrier_NB_r15_H_ */
#include <asn_internal.h>
