/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PRACH_ParametersCE_r13_H_
#define	_PRACH_ParametersCE_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PRACH_ParametersCE_r13__prach_StartingSubframe_r13 {
	PRACH_ParametersCE_r13__prach_StartingSubframe_r13_sf2	= 0,
	PRACH_ParametersCE_r13__prach_StartingSubframe_r13_sf4	= 1,
	PRACH_ParametersCE_r13__prach_StartingSubframe_r13_sf8	= 2,
	PRACH_ParametersCE_r13__prach_StartingSubframe_r13_sf16	= 3,
	PRACH_ParametersCE_r13__prach_StartingSubframe_r13_sf32	= 4,
	PRACH_ParametersCE_r13__prach_StartingSubframe_r13_sf64	= 5,
	PRACH_ParametersCE_r13__prach_StartingSubframe_r13_sf128	= 6,
	PRACH_ParametersCE_r13__prach_StartingSubframe_r13_sf256	= 7
} e_PRACH_ParametersCE_r13__prach_StartingSubframe_r13;
typedef enum PRACH_ParametersCE_r13__maxNumPreambleAttemptCE_r13 {
	PRACH_ParametersCE_r13__maxNumPreambleAttemptCE_r13_n3	= 0,
	PRACH_ParametersCE_r13__maxNumPreambleAttemptCE_r13_n4	= 1,
	PRACH_ParametersCE_r13__maxNumPreambleAttemptCE_r13_n5	= 2,
	PRACH_ParametersCE_r13__maxNumPreambleAttemptCE_r13_n6	= 3,
	PRACH_ParametersCE_r13__maxNumPreambleAttemptCE_r13_n7	= 4,
	PRACH_ParametersCE_r13__maxNumPreambleAttemptCE_r13_n8	= 5,
	PRACH_ParametersCE_r13__maxNumPreambleAttemptCE_r13_n10	= 6
} e_PRACH_ParametersCE_r13__maxNumPreambleAttemptCE_r13;
typedef enum PRACH_ParametersCE_r13__numRepetitionPerPreambleAttempt_r13 {
	PRACH_ParametersCE_r13__numRepetitionPerPreambleAttempt_r13_n1	= 0,
	PRACH_ParametersCE_r13__numRepetitionPerPreambleAttempt_r13_n2	= 1,
	PRACH_ParametersCE_r13__numRepetitionPerPreambleAttempt_r13_n4	= 2,
	PRACH_ParametersCE_r13__numRepetitionPerPreambleAttempt_r13_n8	= 3,
	PRACH_ParametersCE_r13__numRepetitionPerPreambleAttempt_r13_n16	= 4,
	PRACH_ParametersCE_r13__numRepetitionPerPreambleAttempt_r13_n32	= 5,
	PRACH_ParametersCE_r13__numRepetitionPerPreambleAttempt_r13_n64	= 6,
	PRACH_ParametersCE_r13__numRepetitionPerPreambleAttempt_r13_n128	= 7
} e_PRACH_ParametersCE_r13__numRepetitionPerPreambleAttempt_r13;
typedef enum PRACH_ParametersCE_r13__mpdcch_NumRepetition_RA_r13 {
	PRACH_ParametersCE_r13__mpdcch_NumRepetition_RA_r13_r1	= 0,
	PRACH_ParametersCE_r13__mpdcch_NumRepetition_RA_r13_r2	= 1,
	PRACH_ParametersCE_r13__mpdcch_NumRepetition_RA_r13_r4	= 2,
	PRACH_ParametersCE_r13__mpdcch_NumRepetition_RA_r13_r8	= 3,
	PRACH_ParametersCE_r13__mpdcch_NumRepetition_RA_r13_r16	= 4,
	PRACH_ParametersCE_r13__mpdcch_NumRepetition_RA_r13_r32	= 5,
	PRACH_ParametersCE_r13__mpdcch_NumRepetition_RA_r13_r64	= 6,
	PRACH_ParametersCE_r13__mpdcch_NumRepetition_RA_r13_r128	= 7,
	PRACH_ParametersCE_r13__mpdcch_NumRepetition_RA_r13_r256	= 8
} e_PRACH_ParametersCE_r13__mpdcch_NumRepetition_RA_r13;
typedef enum PRACH_ParametersCE_r13__prach_HoppingConfig_r13 {
	PRACH_ParametersCE_r13__prach_HoppingConfig_r13_on	= 0,
	PRACH_ParametersCE_r13__prach_HoppingConfig_r13_off	= 1
} e_PRACH_ParametersCE_r13__prach_HoppingConfig_r13;

/* PRACH-ParametersCE-r13 */
typedef struct PRACH_ParametersCE_r13 {
	long	 prach_ConfigIndex_r13;
	long	 prach_FreqOffset_r13;
	long	*prach_StartingSubframe_r13	/* OPTIONAL */;
	long	*maxNumPreambleAttemptCE_r13	/* OPTIONAL */;
	long	 numRepetitionPerPreambleAttempt_r13;
	struct PRACH_ParametersCE_r13__mpdcch_NarrowbandsToMonitor_r13 {
		A_SEQUENCE_OF(long) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} mpdcch_NarrowbandsToMonitor_r13;
	long	 mpdcch_NumRepetition_RA_r13;
	long	 prach_HoppingConfig_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRACH_ParametersCE_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_prach_StartingSubframe_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumPreambleAttemptCE_r13_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_numRepetitionPerPreambleAttempt_r13_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mpdcch_NumRepetition_RA_r13_32;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_prach_HoppingConfig_r13_42;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_ParametersCE_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_PRACH_ParametersCE_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_PRACH_ParametersCE_r13_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _PRACH_ParametersCE_r13_H_ */
#include <asn_internal.h>
