/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RLC_Parameters_NB_r15_H_
#define	_RLC_Parameters_NB_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RLC_Parameters_NB_r15__rlc_UM_r15 {
	RLC_Parameters_NB_r15__rlc_UM_r15_supported	= 0
} e_RLC_Parameters_NB_r15__rlc_UM_r15;

/* RLC-Parameters-NB-r15 */
typedef struct RLC_Parameters_NB_r15 {
	long	*rlc_UM_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_Parameters_NB_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rlc_UM_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RLC_Parameters_NB_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_RLC_Parameters_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_RLC_Parameters_NB_r15_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RLC_Parameters_NB_r15_H_ */
#include <asn_internal.h>
