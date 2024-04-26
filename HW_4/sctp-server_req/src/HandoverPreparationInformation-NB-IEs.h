/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-InterNodeDefinitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_HandoverPreparationInformation_NB_IEs_H_
#define	_HandoverPreparationInformation_NB_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-Capability-NB-r13.h"
#include "AS-Config-NB.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRM_Config_NB;
struct AS_Context_NB;
struct HandoverPreparationInformation_NB_v1380_IEs;

/* HandoverPreparationInformation-NB-IEs */
typedef struct HandoverPreparationInformation_NB_IEs {
	UE_Capability_NB_r13_t	 ue_RadioAccessCapabilityInfo_r13;
	AS_Config_NB_t	 as_Config_r13;
	struct RRM_Config_NB	*rrm_Config_r13	/* OPTIONAL */;
	struct AS_Context_NB	*as_Context_r13	/* OPTIONAL */;
	struct HandoverPreparationInformation_NB_v1380_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverPreparationInformation_NB_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_NB_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_HandoverPreparationInformation_NB_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_HandoverPreparationInformation_NB_IEs_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverPreparationInformation_NB_IEs_H_ */
#include <asn_internal.h>
