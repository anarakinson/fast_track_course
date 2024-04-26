/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasConfig_H_
#define	_MeasConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RSRP-Range.h"
#include <BOOLEAN.h>
#include <NULL.h>
#include "MobilityStateParameters.h"
#include "SpeedStateScaleFactors.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>
#include "MeasScaleFactor-r12.h"
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasConfig__speedStatePars_PR {
	MeasConfig__speedStatePars_PR_NOTHING,	/* No components present */
	MeasConfig__speedStatePars_PR_release,
	MeasConfig__speedStatePars_PR_setup
} MeasConfig__speedStatePars_PR;
typedef enum MeasConfig__measScaleFactor_r12_PR {
	MeasConfig__measScaleFactor_r12_PR_NOTHING,	/* No components present */
	MeasConfig__measScaleFactor_r12_PR_release,
	MeasConfig__measScaleFactor_r12_PR_setup
} MeasConfig__measScaleFactor_r12_PR;
typedef enum MeasConfig__heightThreshRef_r15_PR {
	MeasConfig__heightThreshRef_r15_PR_NOTHING,	/* No components present */
	MeasConfig__heightThreshRef_r15_PR_release,
	MeasConfig__heightThreshRef_r15_PR_setup
} MeasConfig__heightThreshRef_r15_PR;

/* Forward declarations */
struct MeasObjectToRemoveList;
struct MeasObjectToAddModList;
struct ReportConfigToRemoveList;
struct ReportConfigToAddModList;
struct MeasIdToRemoveList;
struct MeasIdToAddModList;
struct QuantityConfig;
struct MeasGapConfig;
struct PreRegistrationInfoHRPD;
struct MeasObjectToAddModList_v9e0;
struct MeasIdToRemoveListExt_r12;
struct MeasIdToAddModListExt_r12;
struct MeasObjectToRemoveListExt_r13;
struct MeasObjectToAddModListExt_r13;
struct MeasIdToAddModList_v1310;
struct MeasIdToAddModListExt_v1310;
struct MeasGapConfigPerCC_List_r14;
struct MeasGapSharingConfig_r14;
struct MeasGapConfigDensePRS_r15;

/* MeasConfig */
typedef struct MeasConfig {
	struct MeasObjectToRemoveList	*measObjectToRemoveList	/* OPTIONAL */;
	struct MeasObjectToAddModList	*measObjectToAddModList	/* OPTIONAL */;
	struct ReportConfigToRemoveList	*reportConfigToRemoveList	/* OPTIONAL */;
	struct ReportConfigToAddModList	*reportConfigToAddModList	/* OPTIONAL */;
	struct MeasIdToRemoveList	*measIdToRemoveList	/* OPTIONAL */;
	struct MeasIdToAddModList	*measIdToAddModList	/* OPTIONAL */;
	struct QuantityConfig	*quantityConfig	/* OPTIONAL */;
	struct MeasGapConfig	*measGapConfig	/* OPTIONAL */;
	RSRP_Range_t	*s_Measure	/* OPTIONAL */;
	struct PreRegistrationInfoHRPD	*preRegistrationInfoHRPD	/* OPTIONAL */;
	struct MeasConfig__speedStatePars {
		MeasConfig__speedStatePars_PR present;
		union MeasConfig__speedStatePars_u {
			NULL_t	 release;
			struct MeasConfig__speedStatePars__setup {
				MobilityStateParameters_t	 mobilityStateParameters;
				SpeedStateScaleFactors_t	 timeToTrigger_SF;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *speedStatePars;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MeasObjectToAddModList_v9e0	*measObjectToAddModList_v9e0	/* OPTIONAL */;
	BOOLEAN_t	*allowInterruptions_r11	/* OPTIONAL */;
	struct MeasConfig__measScaleFactor_r12 {
		MeasConfig__measScaleFactor_r12_PR present;
		union MeasConfig__measScaleFactor_r12_u {
			NULL_t	 release;
			MeasScaleFactor_r12_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measScaleFactor_r12;
	struct MeasIdToRemoveListExt_r12	*measIdToRemoveListExt_r12	/* OPTIONAL */;
	struct MeasIdToAddModListExt_r12	*measIdToAddModListExt_r12	/* OPTIONAL */;
	BOOLEAN_t	*measRSRQ_OnAllSymbols_r12	/* OPTIONAL */;
	struct MeasObjectToRemoveListExt_r13	*measObjectToRemoveListExt_r13	/* OPTIONAL */;
	struct MeasObjectToAddModListExt_r13	*measObjectToAddModListExt_r13	/* OPTIONAL */;
	struct MeasIdToAddModList_v1310	*measIdToAddModList_v1310	/* OPTIONAL */;
	struct MeasIdToAddModListExt_v1310	*measIdToAddModListExt_v1310	/* OPTIONAL */;
	struct MeasGapConfigPerCC_List_r14	*measGapConfigPerCC_List_r14	/* OPTIONAL */;
	struct MeasGapSharingConfig_r14	*measGapSharingConfig_r14	/* OPTIONAL */;
	BOOLEAN_t	*fr1_Gap_r15	/* OPTIONAL */;
	BOOLEAN_t	*mgta_r15	/* OPTIONAL */;
	struct MeasGapConfigDensePRS_r15	*measGapConfigDensePRS_r15	/* OPTIONAL */;
	struct MeasConfig__heightThreshRef_r15 {
		MeasConfig__heightThreshRef_r15_PR present;
		union MeasConfig__heightThreshRef_r15_u {
			NULL_t	 release;
			long	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *heightThreshRef_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasConfig_1[27];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasConfig_H_ */
#include <asn_internal.h>