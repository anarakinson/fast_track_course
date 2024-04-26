/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UE_EUTRA_Capability_v1390_IEs_H_
#define	_UE_EUTRA_Capability_v1390_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RF_Parameters_v1390;
struct UE_EUTRA_Capability_v13x0_IEs;

/* UE-EUTRA-Capability-v1390-IEs */
typedef struct UE_EUTRA_Capability_v1390_IEs {
	struct RF_Parameters_v1390	*rf_Parameters_v1390	/* OPTIONAL */;
	struct UE_EUTRA_Capability_v13x0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v1390_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1390_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1390_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1390_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_EUTRA_Capability_v1390_IEs_H_ */
#include <asn_internal.h>