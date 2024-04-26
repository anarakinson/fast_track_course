/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_InterFreqCarrierFreqListExt_v1350_H_
#define	_InterFreqCarrierFreqListExt_v1350_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqCarrierFreqInfo_v1350;

/* InterFreqCarrierFreqListExt-v1350 */
typedef struct InterFreqCarrierFreqListExt_v1350 {
	A_SEQUENCE_OF(struct InterFreqCarrierFreqInfo_v1350) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqListExt_v1350_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqListExt_v1350;
extern asn_SET_OF_specifics_t asn_SPC_InterFreqCarrierFreqListExt_v1350_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqListExt_v1350_1[1];
extern asn_per_constraints_t asn_PER_type_InterFreqCarrierFreqListExt_v1350_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqCarrierFreqListExt_v1350_H_ */
#include <asn_internal.h>
