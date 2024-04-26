/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CarrierFreqUTRA_FDD_Ext_r12_H_
#define	_CarrierFreqUTRA_FDD_Ext_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueUTRA.h"
#include "CellReselectionPriority.h"
#include "ReselectionThreshold.h"
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include "ReselectionThresholdQ-r9.h"
#include <constr_SEQUENCE.h>
#include "FreqBandIndicator-UTRA-FDD.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CarrierFreqUTRA_FDD_Ext_r12__reducedMeasPerformance_r12 {
	CarrierFreqUTRA_FDD_Ext_r12__reducedMeasPerformance_r12_true	= 0
} e_CarrierFreqUTRA_FDD_Ext_r12__reducedMeasPerformance_r12;

/* CarrierFreqUTRA-FDD-Ext-r12 */
typedef struct CarrierFreqUTRA_FDD_Ext_r12 {
	ARFCN_ValueUTRA_t	 carrierFreq_r12;
	CellReselectionPriority_t	*cellReselectionPriority_r12	/* OPTIONAL */;
	ReselectionThreshold_t	 threshX_High_r12;
	ReselectionThreshold_t	 threshX_Low_r12;
	long	 q_RxLevMin_r12;
	long	 p_MaxUTRA_r12;
	long	 q_QualMin_r12;
	struct CarrierFreqUTRA_FDD_Ext_r12__threshX_Q_r12 {
		ReselectionThresholdQ_r9_t	 threshX_HighQ_r12;
		ReselectionThresholdQ_r9_t	 threshX_LowQ_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *threshX_Q_r12;
	struct CarrierFreqUTRA_FDD_Ext_r12__multiBandInfoList_r12 {
		A_SEQUENCE_OF(FreqBandIndicator_UTRA_FDD_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *multiBandInfoList_r12;
	long	*reducedMeasPerformance_r12	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreqUTRA_FDD_Ext_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reducedMeasPerformance_r12_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreqUTRA_FDD_Ext_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqUTRA_FDD_Ext_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_CarrierFreqUTRA_FDD_Ext_r12_1[10];

#ifdef __cplusplus
}
#endif

#endif	/* _CarrierFreqUTRA_FDD_Ext_r12_H_ */
#include <asn_internal.h>
