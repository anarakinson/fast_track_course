/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UE_RadioPagingInfo_r12_H_
#define	_UE_RadioPagingInfo_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_RadioPagingInfo_r12__ue_CategoryDL_v1310 {
	UE_RadioPagingInfo_r12__ue_CategoryDL_v1310_m1	= 0
} e_UE_RadioPagingInfo_r12__ue_CategoryDL_v1310;
typedef enum UE_RadioPagingInfo_r12__ce_ModeA_r13 {
	UE_RadioPagingInfo_r12__ce_ModeA_r13_true	= 0
} e_UE_RadioPagingInfo_r12__ce_ModeA_r13;
typedef enum UE_RadioPagingInfo_r12__ce_ModeB_r13 {
	UE_RadioPagingInfo_r12__ce_ModeB_r13_true	= 0
} e_UE_RadioPagingInfo_r12__ce_ModeB_r13;
typedef enum UE_RadioPagingInfo_r12__wakeUpSignal_r15 {
	UE_RadioPagingInfo_r12__wakeUpSignal_r15_true	= 0
} e_UE_RadioPagingInfo_r12__wakeUpSignal_r15;
typedef enum UE_RadioPagingInfo_r12__wakeUpSignal_TDD_r15 {
	UE_RadioPagingInfo_r12__wakeUpSignal_TDD_r15_true	= 0
} e_UE_RadioPagingInfo_r12__wakeUpSignal_TDD_r15;
typedef enum UE_RadioPagingInfo_r12__wakeUpSignalMinGap_eDRX_r15 {
	UE_RadioPagingInfo_r12__wakeUpSignalMinGap_eDRX_r15_ms40	= 0,
	UE_RadioPagingInfo_r12__wakeUpSignalMinGap_eDRX_r15_ms240	= 1,
	UE_RadioPagingInfo_r12__wakeUpSignalMinGap_eDRX_r15_ms1000	= 2,
	UE_RadioPagingInfo_r12__wakeUpSignalMinGap_eDRX_r15_ms2000	= 3
} e_UE_RadioPagingInfo_r12__wakeUpSignalMinGap_eDRX_r15;
typedef enum UE_RadioPagingInfo_r12__wakeUpSignalMinGap_eDRX_TDD_r15 {
	UE_RadioPagingInfo_r12__wakeUpSignalMinGap_eDRX_TDD_r15_ms40	= 0,
	UE_RadioPagingInfo_r12__wakeUpSignalMinGap_eDRX_TDD_r15_ms240	= 1,
	UE_RadioPagingInfo_r12__wakeUpSignalMinGap_eDRX_TDD_r15_ms1000	= 2,
	UE_RadioPagingInfo_r12__wakeUpSignalMinGap_eDRX_TDD_r15_ms2000	= 3
} e_UE_RadioPagingInfo_r12__wakeUpSignalMinGap_eDRX_TDD_r15;

/* UE-RadioPagingInfo-r12 */
typedef struct UE_RadioPagingInfo_r12 {
	long	*ue_Category_v1250	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	long	*ue_CategoryDL_v1310	/* OPTIONAL */;
	long	*ce_ModeA_r13	/* OPTIONAL */;
	long	*ce_ModeB_r13	/* OPTIONAL */;
	long	*wakeUpSignal_r15	/* OPTIONAL */;
	long	*wakeUpSignal_TDD_r15	/* OPTIONAL */;
	long	*wakeUpSignalMinGap_eDRX_r15	/* OPTIONAL */;
	long	*wakeUpSignalMinGap_eDRX_TDD_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_RadioPagingInfo_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_CategoryDL_v1310_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_ModeA_r13_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_ModeB_r13_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_wakeUpSignal_r15_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_wakeUpSignal_TDD_r15_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_wakeUpSignalMinGap_eDRX_r15_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_wakeUpSignalMinGap_eDRX_TDD_r15_19;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_RadioPagingInfo_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_RadioPagingInfo_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_RadioPagingInfo_r12_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_RadioPagingInfo_r12_H_ */
#include <asn_internal.h>
