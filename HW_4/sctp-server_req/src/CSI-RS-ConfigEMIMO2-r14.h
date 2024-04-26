/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CSI_RS_ConfigEMIMO2_r14_H_
#define	_CSI_RS_ConfigEMIMO2_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "CSI-RS-ConfigBeamformed-r14.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSI_RS_ConfigEMIMO2_r14_PR {
	CSI_RS_ConfigEMIMO2_r14_PR_NOTHING,	/* No components present */
	CSI_RS_ConfigEMIMO2_r14_PR_release,
	CSI_RS_ConfigEMIMO2_r14_PR_setup
} CSI_RS_ConfigEMIMO2_r14_PR;

/* CSI-RS-ConfigEMIMO2-r14 */
typedef struct CSI_RS_ConfigEMIMO2_r14 {
	CSI_RS_ConfigEMIMO2_r14_PR present;
	union CSI_RS_ConfigEMIMO2_r14_u {
		NULL_t	 release;
		CSI_RS_ConfigBeamformed_r14_t	 setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_RS_ConfigEMIMO2_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_RS_ConfigEMIMO2_r14;
extern asn_CHOICE_specifics_t asn_SPC_CSI_RS_ConfigEMIMO2_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_RS_ConfigEMIMO2_r14_1[2];
extern asn_per_constraints_t asn_PER_type_CSI_RS_ConfigEMIMO2_r14_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_RS_ConfigEMIMO2_r14_H_ */
#include <asn_internal.h>
