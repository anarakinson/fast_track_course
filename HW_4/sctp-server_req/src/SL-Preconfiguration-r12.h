/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SL_Preconfiguration_r12_H_
#define	_SL_Preconfiguration_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-PreconfigGeneral-r12.h"
#include "SL-PreconfigSync-r12.h"
#include "SL-PreconfigCommPoolList4-r12.h"
#include "SL-PreconfigCommRxPoolList-r13.h"
#include <constr_SEQUENCE.h>
#include "SL-PreconfigDiscRxPoolList-r13.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_PreconfigRelay_r13;
struct SL_PreconfigCommTxPoolList_r13;
struct SL_PreconfigDiscTxPoolList_r13;

/* SL-Preconfiguration-r12 */
typedef struct SL_Preconfiguration_r12 {
	SL_PreconfigGeneral_r12_t	 preconfigGeneral_r12;
	SL_PreconfigSync_r12_t	 preconfigSync_r12;
	SL_PreconfigCommPoolList4_r12_t	 preconfigComm_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SL_Preconfiguration_r12__preconfigComm_v1310 {
		SL_PreconfigCommRxPoolList_r13_t	 commRxPoolList_r13;
		struct SL_PreconfigCommTxPoolList_r13	*commTxPoolList_r13	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *preconfigComm_v1310;
	struct SL_Preconfiguration_r12__preconfigDisc_r13 {
		SL_PreconfigDiscRxPoolList_r13_t	 discRxPoolList_r13;
		struct SL_PreconfigDiscTxPoolList_r13	*discTxPoolList_r13	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *preconfigDisc_r13;
	struct SL_PreconfigRelay_r13	*preconfigRelay_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_Preconfiguration_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_Preconfiguration_r12;

#ifdef __cplusplus
}
#endif

#endif	/* _SL_Preconfiguration_r12_H_ */
#include <asn_internal.h>
