/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_HandoverPreparationInformation_v1250_IEs_H_
#define	_HandoverPreparationInformation_v1250_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AS_Config_v1250;
struct HandoverPreparationInformation_v1320_IEs;

/* HandoverPreparationInformation-v1250-IEs */
typedef struct HandoverPreparationInformation_v1250_IEs {
	ARFCN_ValueEUTRA_r9_t	*ue_SupportedEARFCN_r12	/* OPTIONAL */;
	struct AS_Config_v1250	*as_Config_v1250	/* OPTIONAL */;
	struct HandoverPreparationInformation_v1320_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverPreparationInformation_v1250_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_v1250_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_HandoverPreparationInformation_v1250_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_HandoverPreparationInformation_v1250_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverPreparationInformation_v1250_IEs_H_ */
#include <asn_internal.h>
