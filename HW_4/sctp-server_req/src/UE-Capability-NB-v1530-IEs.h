/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UE_Capability_NB_v1530_IEs_H_
#define	_UE_Capability_NB_v1530_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "RLC-Parameters-NB-r15.h"
#include "MAC-Parameters-NB-v1530.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_Capability_NB_v1530_IEs__earlyData_UP_r15 {
	UE_Capability_NB_v1530_IEs__earlyData_UP_r15_supported	= 0
} e_UE_Capability_NB_v1530_IEs__earlyData_UP_r15;

/* Forward declarations */
struct PhyLayerParameters_NB_v1530;
struct TDD_UE_Capability_NB_r15;

/* UE-Capability-NB-v1530-IEs */
typedef struct UE_Capability_NB_v1530_IEs {
	long	*earlyData_UP_r15	/* OPTIONAL */;
	RLC_Parameters_NB_r15_t	 rlc_Parameters_r15;
	MAC_Parameters_NB_v1530_t	 mac_Parameters_v1530;
	struct PhyLayerParameters_NB_v1530	*phyLayerParameters_v1530	/* OPTIONAL */;
	struct TDD_UE_Capability_NB_r15	*tdd_UE_Capability_r15	/* OPTIONAL */;
	struct UE_Capability_NB_v1530_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Capability_NB_v1530_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_earlyData_UP_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_Capability_NB_v1530_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_Capability_NB_v1530_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_Capability_NB_v1530_IEs_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Capability_NB_v1530_IEs_H_ */
#include <asn_internal.h>
