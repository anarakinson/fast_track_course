/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SL_PPPR_Dest_CarrierFreq_H_
#define	_SL_PPPR_Dest_CarrierFreq_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_DestinationInfoList_r12;
struct SL_AllowedCarrierFreqList_r15;

/* SL-PPPR-Dest-CarrierFreq */
typedef struct SL_PPPR_Dest_CarrierFreq {
	struct SL_DestinationInfoList_r12	*destinationInfoList_r15	/* OPTIONAL */;
	struct SL_AllowedCarrierFreqList_r15	*allowedCarrierFreqList_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_PPPR_Dest_CarrierFreq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_PPPR_Dest_CarrierFreq;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_PPPR_Dest_CarrierFreq_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_PPPR_Dest_CarrierFreq_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_PPPR_Dest_CarrierFreq_H_ */
#include <asn_internal.h>
