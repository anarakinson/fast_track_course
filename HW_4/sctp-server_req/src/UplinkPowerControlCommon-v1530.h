/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UplinkPowerControlCommon_v1530_H_
#define	_UplinkPowerControlCommon_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DeltaFList-SPUCCH-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UplinkPowerControlCommon-v1530 */
typedef struct UplinkPowerControlCommon_v1530 {
	DeltaFList_SPUCCH_r15_t	 deltaFList_SPUCCH_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkPowerControlCommon_v1530_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlCommon_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_UplinkPowerControlCommon_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_UplinkPowerControlCommon_v1530_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _UplinkPowerControlCommon_v1530_H_ */
#include <asn_internal.h>
