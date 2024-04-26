/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SupportedBandListUTRA_TDD768_H_
#define	_SupportedBandListUTRA_TDD768_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SupportedBandUTRA-TDD768.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SupportedBandListUTRA-TDD768 */
typedef struct SupportedBandListUTRA_TDD768 {
	A_SEQUENCE_OF(SupportedBandUTRA_TDD768_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBandListUTRA_TDD768_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandListUTRA_TDD768;
extern asn_SET_OF_specifics_t asn_SPC_SupportedBandListUTRA_TDD768_specs_1;
extern asn_TYPE_member_t asn_MBR_SupportedBandListUTRA_TDD768_1[1];
extern asn_per_constraints_t asn_PER_type_SupportedBandListUTRA_TDD768_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedBandListUTRA_TDD768_H_ */
#include <asn_internal.h>
