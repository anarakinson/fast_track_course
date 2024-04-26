/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_NPUSCH_ConfigCommon_NB_r13_H_
#define	_NPUSCH_ConfigCommon_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "UL-ReferenceSignalsNPUSCH-NB-r13.h"
#include "ACK-NACK-NumRepetitions-NB-r13.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13 {
	NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc0	= 0,
	NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc1	= 1,
	NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc2	= 2,
	NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc3	= 3,
	NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc4	= 4,
	NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc5	= 5,
	NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc6	= 6,
	NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc7	= 7,
	NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc8	= 8,
	NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc9	= 9,
	NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc10	= 10,
	NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc11	= 11,
	NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc12	= 12,
	NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc13	= 13,
	NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc14	= 14,
	NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc15	= 15
} e_NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13;

/* NPUSCH-ConfigCommon-NB-r13 */
typedef struct NPUSCH_ConfigCommon_NB_r13 {
	struct NPUSCH_ConfigCommon_NB_r13__ack_NACK_NumRepetitions_Msg4_r13 {
		A_SEQUENCE_OF(ACK_NACK_NumRepetitions_NB_r13_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ack_NACK_NumRepetitions_Msg4_r13;
	long	*srs_SubframeConfig_r13	/* OPTIONAL */;
	struct NPUSCH_ConfigCommon_NB_r13__dmrs_Config_r13 {
		long	*threeTone_BaseSequence_r13	/* OPTIONAL */;
		long	 threeTone_CyclicShift_r13;
		long	*sixTone_BaseSequence_r13	/* OPTIONAL */;
		long	 sixTone_CyclicShift_r13;
		long	*twelveTone_BaseSequence_r13	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dmrs_Config_r13;
	UL_ReferenceSignalsNPUSCH_NB_r13_t	 ul_ReferenceSignalsNPUSCH_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NPUSCH_ConfigCommon_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_srs_SubframeConfig_r13_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NPUSCH_ConfigCommon_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_NPUSCH_ConfigCommon_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_NPUSCH_ConfigCommon_NB_r13_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NPUSCH_ConfigCommon_NB_r13_H_ */
#include <asn_internal.h>
