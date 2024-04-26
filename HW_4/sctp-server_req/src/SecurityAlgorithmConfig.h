/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SecurityAlgorithmConfig_H_
#define	_SecurityAlgorithmConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CipheringAlgorithm-r12.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SecurityAlgorithmConfig__integrityProtAlgorithm {
	SecurityAlgorithmConfig__integrityProtAlgorithm_eia0_v920	= 0,
	SecurityAlgorithmConfig__integrityProtAlgorithm_eia1	= 1,
	SecurityAlgorithmConfig__integrityProtAlgorithm_eia2	= 2,
	SecurityAlgorithmConfig__integrityProtAlgorithm_eia3_v1130	= 3,
	SecurityAlgorithmConfig__integrityProtAlgorithm_spare4	= 4,
	SecurityAlgorithmConfig__integrityProtAlgorithm_spare3	= 5,
	SecurityAlgorithmConfig__integrityProtAlgorithm_spare2	= 6,
	SecurityAlgorithmConfig__integrityProtAlgorithm_spare1	= 7
	/*
	 * Enumeration is extensible
	 */
} e_SecurityAlgorithmConfig__integrityProtAlgorithm;

/* SecurityAlgorithmConfig */
typedef struct SecurityAlgorithmConfig {
	CipheringAlgorithm_r12_t	 cipheringAlgorithm;
	long	 integrityProtAlgorithm;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityAlgorithmConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_integrityProtAlgorithm_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SecurityAlgorithmConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_SecurityAlgorithmConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_SecurityAlgorithmConfig_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SecurityAlgorithmConfig_H_ */
#include <asn_internal.h>
