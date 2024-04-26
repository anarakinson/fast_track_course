/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType19_r12_H_
#define	_SystemInformationBlockType19_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include "SL-DiscRxPoolList-r12.h"
#include <constr_SEQUENCE.h>
#include <NativeEnumerated.h>
#include "SL-DiscConfigRelayUE-r13.h"
#include "SL-DiscConfigRemoteUE-r13.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType19_r12__discConfig_v1310__gapRequestsAllowedCommon {
	SystemInformationBlockType19_r12__discConfig_v1310__gapRequestsAllowedCommon_true	= 0
} e_SystemInformationBlockType19_r12__discConfig_v1310__gapRequestsAllowedCommon;

/* Forward declarations */
struct SL_CarrierFreqInfoList_r12;
struct SL_DiscTxPoolList_r12;
struct SL_DiscTxPowerInfoList_r12;
struct SL_SyncConfigList_r12;
struct SL_CarrierFreqInfoList_v1310;

/* SystemInformationBlockType19-r12 */
typedef struct SystemInformationBlockType19_r12 {
	struct SystemInformationBlockType19_r12__discConfig_r12 {
		SL_DiscRxPoolList_r12_t	 discRxPool_r12;
		struct SL_DiscTxPoolList_r12	*discTxPoolCommon_r12	/* OPTIONAL */;
		struct SL_DiscTxPowerInfoList_r12	*discTxPowerInfo_r12	/* OPTIONAL */;
		struct SL_SyncConfigList_r12	*discSyncConfig_r12	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *discConfig_r12;
	struct SL_CarrierFreqInfoList_r12	*discInterFreqList_r12	/* OPTIONAL */;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SystemInformationBlockType19_r12__discConfig_v1310 {
		struct SL_CarrierFreqInfoList_v1310	*discInterFreqList_v1310	/* OPTIONAL */;
		long	*gapRequestsAllowedCommon	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *discConfig_v1310;
	struct SystemInformationBlockType19_r12__discConfigRelay_r13 {
		SL_DiscConfigRelayUE_r13_t	 relayUE_Config_r13;
		SL_DiscConfigRemoteUE_r13_t	 remoteUE_Config_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *discConfigRelay_r13;
	struct SystemInformationBlockType19_r12__discConfigPS_13 {
		SL_DiscRxPoolList_r12_t	 discRxPoolPS_r13;
		struct SL_DiscTxPoolList_r12	*discTxPoolPS_Common_r13	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *discConfigPS_13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType19_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_gapRequestsAllowedCommon_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType19_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType19_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType19_r12_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType19_r12_H_ */
#include <asn_internal.h>
