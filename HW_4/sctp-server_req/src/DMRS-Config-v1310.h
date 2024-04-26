/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_DMRS_Config_v1310_H_
#define	_DMRS_Config_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DMRS_Config_v1310__dmrs_tableAlt_r13 {
	DMRS_Config_v1310__dmrs_tableAlt_r13_true	= 0
} e_DMRS_Config_v1310__dmrs_tableAlt_r13;

/* DMRS-Config-v1310 */
typedef struct DMRS_Config_v1310 {
	long	*dmrs_tableAlt_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DMRS_Config_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dmrs_tableAlt_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DMRS_Config_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_DMRS_Config_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_DMRS_Config_v1310_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _DMRS_Config_v1310_H_ */
#include <asn_internal.h>
