/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UL_AM_RLC_r15_H_
#define	_UL_AM_RLC_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "T-PollRetransmit.h"
#include "PollPDU-r15.h"
#include "PollByte-r14.h"
#include <NativeEnumerated.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_AM_RLC_r15__maxRetxThreshold_r15 {
	UL_AM_RLC_r15__maxRetxThreshold_r15_t1	= 0,
	UL_AM_RLC_r15__maxRetxThreshold_r15_t2	= 1,
	UL_AM_RLC_r15__maxRetxThreshold_r15_t3	= 2,
	UL_AM_RLC_r15__maxRetxThreshold_r15_t4	= 3,
	UL_AM_RLC_r15__maxRetxThreshold_r15_t6	= 4,
	UL_AM_RLC_r15__maxRetxThreshold_r15_t8	= 5,
	UL_AM_RLC_r15__maxRetxThreshold_r15_t16	= 6,
	UL_AM_RLC_r15__maxRetxThreshold_r15_t32	= 7
} e_UL_AM_RLC_r15__maxRetxThreshold_r15;

/* UL-AM-RLC-r15 */
typedef struct UL_AM_RLC_r15 {
	T_PollRetransmit_t	 t_PollRetransmit_r15;
	PollPDU_r15_t	 pollPDU_r15;
	PollByte_r14_t	 pollByte_r15;
	long	 maxRetxThreshold_r15;
	BOOLEAN_t	 extended_RLC_LI_Field_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_AM_RLC_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxRetxThreshold_r15_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UL_AM_RLC_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_UL_AM_RLC_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_AM_RLC_r15_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _UL_AM_RLC_r15_H_ */
#include <asn_internal.h>
