/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SL_PreconfigGeneral_r12_H_
#define	_SL_PreconfigGeneral_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA-r9.h"
#include "P-Max.h"
#include "AdditionalSpectrumEmission.h"
#include <NativeEnumerated.h>
#include "TDD-ConfigSL-r12.h"
#include <BIT_STRING.h>
#include "AdditionalSpectrumEmission-v10l0.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_PreconfigGeneral_r12__sl_bandwidth_r12 {
	SL_PreconfigGeneral_r12__sl_bandwidth_r12_n6	= 0,
	SL_PreconfigGeneral_r12__sl_bandwidth_r12_n15	= 1,
	SL_PreconfigGeneral_r12__sl_bandwidth_r12_n25	= 2,
	SL_PreconfigGeneral_r12__sl_bandwidth_r12_n50	= 3,
	SL_PreconfigGeneral_r12__sl_bandwidth_r12_n75	= 4,
	SL_PreconfigGeneral_r12__sl_bandwidth_r12_n100	= 5
} e_SL_PreconfigGeneral_r12__sl_bandwidth_r12;

/* SL-PreconfigGeneral-r12 */
typedef struct SL_PreconfigGeneral_r12 {
	struct SL_PreconfigGeneral_r12__rohc_Profiles_r12 {
		BOOLEAN_t	 profile0x0001_r12;
		BOOLEAN_t	 profile0x0002_r12;
		BOOLEAN_t	 profile0x0004_r12;
		BOOLEAN_t	 profile0x0006_r12;
		BOOLEAN_t	 profile0x0101_r12;
		BOOLEAN_t	 profile0x0102_r12;
		BOOLEAN_t	 profile0x0104_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} rohc_Profiles_r12;
	ARFCN_ValueEUTRA_r9_t	 carrierFreq_r12;
	P_Max_t	 maxTxPower_r12;
	AdditionalSpectrumEmission_t	 additionalSpectrumEmission_r12;
	long	 sl_bandwidth_r12;
	TDD_ConfigSL_r12_t	 tdd_ConfigSL_r12;
	BIT_STRING_t	 reserved_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	AdditionalSpectrumEmission_v10l0_t	*additionalSpectrumEmission_v1440	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_PreconfigGeneral_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sl_bandwidth_r12_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_PreconfigGeneral_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_PreconfigGeneral_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_PreconfigGeneral_r12_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_PreconfigGeneral_r12_H_ */
#include <asn_internal.h>
