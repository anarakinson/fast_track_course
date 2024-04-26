/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType1_NB_v1450_H_
#define	_SystemInformationBlockType1_NB_v1450_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450 {
	SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB_6	= 0,
	SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB_4dot77	= 1,
	SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB_3	= 2,
	SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB_1dot77	= 3,
	SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB0	= 4,
	SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB1	= 5,
	SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB1dot23	= 6,
	SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB2	= 7,
	SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB3	= 8,
	SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB4	= 9,
	SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB4dot23	= 10,
	SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB5	= 11,
	SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB6	= 12,
	SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB7	= 13,
	SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB8	= 14,
	SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB9	= 15
} e_SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450;

/* Forward declarations */
struct SystemInformationBlockType1_NB_v1530;

/* SystemInformationBlockType1-NB-v1450 */
typedef struct SystemInformationBlockType1_NB_v1450 {
	long	*nrs_CRS_PowerOffset_v1450	/* OPTIONAL */;
	struct SystemInformationBlockType1_NB_v1530	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType1_NB_v1450_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_nrs_CRS_PowerOffset_v1450_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_NB_v1450;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_NB_v1450_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_NB_v1450_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType1_NB_v1450_H_ */
#include <asn_internal.h>
