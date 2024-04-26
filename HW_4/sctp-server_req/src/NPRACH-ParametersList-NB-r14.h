/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_NPRACH_ParametersList_NB_r14_H_
#define	_NPRACH_ParametersList_NB_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NPRACH_Parameters_NB_r14;

/* NPRACH-ParametersList-NB-r14 */
typedef struct NPRACH_ParametersList_NB_r14 {
	A_SEQUENCE_OF(struct NPRACH_Parameters_NB_r14) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NPRACH_ParametersList_NB_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NPRACH_ParametersList_NB_r14;
extern asn_SET_OF_specifics_t asn_SPC_NPRACH_ParametersList_NB_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_NPRACH_ParametersList_NB_r14_1[1];
extern asn_per_constraints_t asn_PER_type_NPRACH_ParametersList_NB_r14_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NPRACH_ParametersList_NB_r14_H_ */
#include <asn_internal.h>
