/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MIMO_CA_ParametersPerBoBC_r13_H_
#define	_MIMO_CA_ParametersPerBoBC_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MIMO_CA_ParametersPerBoBCPerTM_r13;

/* MIMO-CA-ParametersPerBoBC-r13 */
typedef struct MIMO_CA_ParametersPerBoBC_r13 {
	struct MIMO_CA_ParametersPerBoBCPerTM_r13	*parametersTM9_r13	/* OPTIONAL */;
	struct MIMO_CA_ParametersPerBoBCPerTM_r13	*parametersTM10_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MIMO_CA_ParametersPerBoBC_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MIMO_CA_ParametersPerBoBC_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_MIMO_CA_ParametersPerBoBC_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_MIMO_CA_ParametersPerBoBC_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MIMO_CA_ParametersPerBoBC_r13_H_ */
#include <asn_internal.h>
