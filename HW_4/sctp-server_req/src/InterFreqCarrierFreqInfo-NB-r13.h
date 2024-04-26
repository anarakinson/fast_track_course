/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_InterFreqCarrierFreqInfo_NB_r13_H_
#define	_InterFreqCarrierFreqInfo_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CarrierFreq-NB-r13.h"
#include "Q-RxLevMin.h"
#include "Q-QualMin-r9.h"
#include "P-Max.h"
#include "Q-OffsetRange.h"
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InterFreqCarrierFreqInfo_NB_r13__powerClass14dBm_Offset_r14 {
	InterFreqCarrierFreqInfo_NB_r13__powerClass14dBm_Offset_r14_dB_6	= 0,
	InterFreqCarrierFreqInfo_NB_r13__powerClass14dBm_Offset_r14_dB_3	= 1,
	InterFreqCarrierFreqInfo_NB_r13__powerClass14dBm_Offset_r14_dB3	= 2,
	InterFreqCarrierFreqInfo_NB_r13__powerClass14dBm_Offset_r14_dB6	= 3,
	InterFreqCarrierFreqInfo_NB_r13__powerClass14dBm_Offset_r14_dB9	= 4,
	InterFreqCarrierFreqInfo_NB_r13__powerClass14dBm_Offset_r14_dB12	= 5
} e_InterFreqCarrierFreqInfo_NB_r13__powerClass14dBm_Offset_r14;
typedef enum InterFreqCarrierFreqInfo_NB_r13__ce_AuthorisationOffset_r14 {
	InterFreqCarrierFreqInfo_NB_r13__ce_AuthorisationOffset_r14_dB5	= 0,
	InterFreqCarrierFreqInfo_NB_r13__ce_AuthorisationOffset_r14_dB10	= 1,
	InterFreqCarrierFreqInfo_NB_r13__ce_AuthorisationOffset_r14_dB15	= 2,
	InterFreqCarrierFreqInfo_NB_r13__ce_AuthorisationOffset_r14_dB20	= 3,
	InterFreqCarrierFreqInfo_NB_r13__ce_AuthorisationOffset_r14_dB25	= 4,
	InterFreqCarrierFreqInfo_NB_r13__ce_AuthorisationOffset_r14_dB30	= 5,
	InterFreqCarrierFreqInfo_NB_r13__ce_AuthorisationOffset_r14_dB35	= 6
} e_InterFreqCarrierFreqInfo_NB_r13__ce_AuthorisationOffset_r14;

/* Forward declarations */
struct InterFreqNeighCellList_NB_r13;
struct InterFreqBlackCellList_NB_r13;
struct MultiBandInfoList_NB_r13;
struct NSSS_RRM_Config_NB_r15;
struct InterFreqNeighCellList_NB_v1530;
struct CarrierFreq_NB_v1550;

/* InterFreqCarrierFreqInfo-NB-r13 */
typedef struct InterFreqCarrierFreqInfo_NB_r13 {
	CarrierFreq_NB_r13_t	 dl_CarrierFreq_r13;
	Q_RxLevMin_t	 q_RxLevMin_r13;
	Q_QualMin_r9_t	*q_QualMin_r13	/* OPTIONAL */;
	P_Max_t	*p_Max_r13	/* OPTIONAL */;
	Q_OffsetRange_t	*q_OffsetFreq_r13	/* DEFAULT 15 */;
	struct InterFreqNeighCellList_NB_r13	*interFreqNeighCellList_r13	/* OPTIONAL */;
	struct InterFreqBlackCellList_NB_r13	*interFreqBlackCellList_r13	/* OPTIONAL */;
	struct MultiBandInfoList_NB_r13	*multiBandInfoList_r13	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	long	*delta_RxLevMin_v1350	/* OPTIONAL */;
	long	*powerClass14dBm_Offset_r14	/* OPTIONAL */;
	long	*ce_AuthorisationOffset_r14	/* OPTIONAL */;
	struct NSSS_RRM_Config_NB_r15	*nsss_RRM_Config_r15	/* OPTIONAL */;
	struct InterFreqNeighCellList_NB_v1530	*interFreqNeighCellList_v1530	/* OPTIONAL */;
	struct CarrierFreq_NB_v1550	*dl_CarrierFreq_v1550	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqInfo_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_powerClass14dBm_Offset_r14_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_AuthorisationOffset_r14_19;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqInfo_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_InterFreqCarrierFreqInfo_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqInfo_NB_r13_1[14];

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqCarrierFreqInfo_NB_r13_H_ */
#include <asn_internal.h>
