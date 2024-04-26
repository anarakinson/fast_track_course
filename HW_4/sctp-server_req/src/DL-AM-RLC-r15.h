/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_DL_AM_RLC_r15_H_
#define	_DL_AM_RLC_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "T-Reordering.h"
#include "T-StatusProhibit.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-AM-RLC-r15 */
typedef struct DL_AM_RLC_r15 {
	T_Reordering_t	 t_Reordering_r15;
	T_StatusProhibit_t	 t_StatusProhibit_r15;
	BOOLEAN_t	 extended_RLC_LI_Field_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_AM_RLC_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_AM_RLC_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_DL_AM_RLC_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_DL_AM_RLC_r15_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _DL_AM_RLC_r15_H_ */
#include <asn_internal.h>
