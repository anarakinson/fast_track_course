/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCConnectionResume_v1530_IEs_H_
#define	_RRCConnectionResume_v1530_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionResume_v1530_IEs__fullConfig_r15 {
	RRCConnectionResume_v1530_IEs__fullConfig_r15_true	= 0
} e_RRCConnectionResume_v1530_IEs__fullConfig_r15;

/* RRCConnectionResume-v1530-IEs */
typedef struct RRCConnectionResume_v1530_IEs {
	long	*fullConfig_r15	/* OPTIONAL */;
	struct RRCConnectionResume_v1530_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionResume_v1530_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_fullConfig_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionResume_v1530_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResume_v1530_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionResume_v1530_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionResume_v1530_IEs_H_ */
#include <asn_internal.h>
