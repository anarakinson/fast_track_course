/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_NPRACH_ParametersTDD_NB_r15_H_
#define	_NPRACH_ParametersTDD_NB_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_Periodicity_r15 {
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_Periodicity_r15_ms80	= 0,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_Periodicity_r15_ms160	= 1,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_Periodicity_r15_ms320	= 2,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_Periodicity_r15_ms640	= 3,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_Periodicity_r15_ms1280	= 4,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_Periodicity_r15_ms2560	= 5,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_Periodicity_r15_ms5120	= 6,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_Periodicity_r15_ms10240	= 7
} e_NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_Periodicity_r15;
typedef enum NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15 {
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_ms10	= 0,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_ms20	= 1,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_ms40	= 2,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_ms80	= 3,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_ms160	= 4,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_ms320	= 5,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_ms640	= 6,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_ms1280	= 7,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_ms2560	= 8,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_ms5120	= 9,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_spare6	= 10,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_spare5	= 11,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_spare4	= 12,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_spare3	= 13,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_spare2	= 14,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15_spare1	= 15
} e_NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_StartTime_r15;
typedef enum NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15 {
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n0	= 0,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n12	= 1,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n24	= 2,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n36	= 3,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n2	= 4,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n18	= 5,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_n34	= 6,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15_spare1	= 7
} e_NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_SubcarrierOffset_r15;
typedef enum NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumSubcarriers_r15 {
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumSubcarriers_r15_n12	= 0,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumSubcarriers_r15_n24	= 1,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumSubcarriers_r15_n36	= 2,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumSubcarriers_r15_n48	= 3
} e_NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumSubcarriers_r15;
typedef enum NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_SubcarrierMSG3_RangeStart_r15 {
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_SubcarrierMSG3_RangeStart_r15_zero	= 0,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_SubcarrierMSG3_RangeStart_r15_oneThird	= 1,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_SubcarrierMSG3_RangeStart_r15_twoThird	= 2,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_SubcarrierMSG3_RangeStart_r15_one	= 3
} e_NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_SubcarrierMSG3_RangeStart_r15;
typedef enum NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15 {
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r1	= 0,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r2	= 1,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r4	= 2,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r8	= 3,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r16	= 4,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r32	= 5,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r64	= 6,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r128	= 7,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r256	= 8,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r512	= 9,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r1024	= 10,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_r2048	= 11,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_spare4	= 12,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_spare3	= 13,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_spare2	= 14,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15_spare1	= 15
} e_NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_NumRepetitions_RA_r15;
typedef enum NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_StartSF_CSS_RA_r15 {
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_StartSF_CSS_RA_r15_v4	= 0,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_StartSF_CSS_RA_r15_v8	= 1,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_StartSF_CSS_RA_r15_v16	= 2,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_StartSF_CSS_RA_r15_v32	= 3,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_StartSF_CSS_RA_r15_v48	= 4,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_StartSF_CSS_RA_r15_v64	= 5,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_StartSF_CSS_RA_r15_v96	= 6,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_StartSF_CSS_RA_r15_v128	= 7
} e_NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_StartSF_CSS_RA_r15;
typedef enum NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_Offset_RA_r15 {
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_Offset_RA_r15_zero	= 0,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_Offset_RA_r15_oneEighth	= 1,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_Offset_RA_r15_oneFourth	= 2,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_Offset_RA_r15_threeEighth	= 3
} e_NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__npdcch_Offset_RA_r15;
typedef enum NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15 {
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n8	= 0,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n10	= 1,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n11	= 2,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n12	= 3,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n20	= 4,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n22	= 5,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n23	= 6,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n24	= 7,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n32	= 8,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n34	= 9,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n35	= 10,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n36	= 11,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n40	= 12,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n44	= 13,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n46	= 14,
	NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15_n48	= 15
} e_NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15__nprach_NumCBRA_StartSubcarriers_r15;

/* NPRACH-ParametersTDD-NB-r15 */
typedef struct NPRACH_ParametersTDD_NB_r15 {
	struct NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15 {
		long	*nprach_Periodicity_r15	/* OPTIONAL */;
		long	*nprach_StartTime_r15	/* OPTIONAL */;
		long	*nprach_SubcarrierOffset_r15	/* OPTIONAL */;
		long	*nprach_NumSubcarriers_r15	/* OPTIONAL */;
		long	*nprach_SubcarrierMSG3_RangeStart_r15	/* OPTIONAL */;
		long	*npdcch_NumRepetitions_RA_r15	/* OPTIONAL */;
		long	*npdcch_StartSF_CSS_RA_r15	/* OPTIONAL */;
		long	*npdcch_Offset_RA_r15	/* OPTIONAL */;
		long	*nprach_NumCBRA_StartSubcarriers_r15	/* OPTIONAL */;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nprach_Parameters_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NPRACH_ParametersTDD_NB_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_nprach_Periodicity_r15_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nprach_StartTime_r15_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nprach_SubcarrierOffset_r15_29;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nprach_NumSubcarriers_r15_38;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nprach_SubcarrierMSG3_RangeStart_r15_43;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_npdcch_NumRepetitions_RA_r15_48;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_npdcch_StartSF_CSS_RA_r15_65;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_npdcch_Offset_RA_r15_74;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nprach_NumCBRA_StartSubcarriers_r15_79;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NPRACH_ParametersTDD_NB_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_NPRACH_ParametersTDD_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_NPRACH_ParametersTDD_NB_r15_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NPRACH_ParametersTDD_NB_r15_H_ */
#include <asn_internal.h>
