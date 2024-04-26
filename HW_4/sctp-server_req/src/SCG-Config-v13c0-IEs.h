/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SCG_Config_v13c0_IEs_H_
#define	_SCG_Config_v13c0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SCG_ConfigPartSCG_v13c0;

/* SCG-Config-v13c0-IEs */
typedef struct SCG_Config_v13c0_IEs {
	struct SCG_ConfigPartSCG_v13c0	*scg_RadioConfig_v13c0	/* OPTIONAL */;
	struct SCG_Config_v13c0_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCG_Config_v13c0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCG_Config_v13c0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SCG_Config_v13c0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SCG_Config_v13c0_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SCG_Config_v13c0_IEs_H_ */
#include <asn_internal.h>
