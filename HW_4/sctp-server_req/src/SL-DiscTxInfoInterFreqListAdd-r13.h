/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SL_DiscTxInfoInterFreqListAdd_r13_H_
#define	_SL_DiscTxInfoInterFreqListAdd_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "ARFCN-ValueEUTRA-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_DiscTxResourceInfoPerFreq_r13;

/* SL-DiscTxInfoInterFreqListAdd-r13 */
typedef struct SL_DiscTxInfoInterFreqListAdd_r13 {
	struct SL_DiscTxInfoInterFreqListAdd_r13__discTxFreqToAddModList_r13 {
		A_SEQUENCE_OF(struct SL_DiscTxResourceInfoPerFreq_r13) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *discTxFreqToAddModList_r13;
	struct SL_DiscTxInfoInterFreqListAdd_r13__discTxFreqToReleaseList_r13 {
		A_SEQUENCE_OF(ARFCN_ValueEUTRA_r9_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *discTxFreqToReleaseList_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_DiscTxInfoInterFreqListAdd_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_DiscTxInfoInterFreqListAdd_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_DiscTxInfoInterFreqListAdd_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_DiscTxInfoInterFreqListAdd_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_DiscTxInfoInterFreqListAdd_r13_H_ */
#include <asn_internal.h>
