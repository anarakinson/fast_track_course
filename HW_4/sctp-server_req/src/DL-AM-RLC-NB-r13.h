/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_DL_AM_RLC_NB_r13_H_
#define	_DL_AM_RLC_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_AM_RLC_NB_r13__enableStatusReportSN_Gap_r13 {
	DL_AM_RLC_NB_r13__enableStatusReportSN_Gap_r13_true	= 0
} e_DL_AM_RLC_NB_r13__enableStatusReportSN_Gap_r13;

/* DL-AM-RLC-NB-r13 */
typedef struct DL_AM_RLC_NB_r13 {
	long	*enableStatusReportSN_Gap_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_AM_RLC_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_enableStatusReportSN_Gap_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DL_AM_RLC_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_DL_AM_RLC_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_DL_AM_RLC_NB_r13_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _DL_AM_RLC_NB_r13_H_ */
#include <asn_internal.h>
