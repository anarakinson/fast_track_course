/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_EUTRA_5GC_Parameters_r15_H_
#define	_EUTRA_5GC_Parameters_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EUTRA_5GC_Parameters_r15__eutra_5GC_r15 {
	EUTRA_5GC_Parameters_r15__eutra_5GC_r15_supported	= 0
} e_EUTRA_5GC_Parameters_r15__eutra_5GC_r15;
typedef enum EUTRA_5GC_Parameters_r15__eutra_EPC_HO_EUTRA_5GC_r15 {
	EUTRA_5GC_Parameters_r15__eutra_EPC_HO_EUTRA_5GC_r15_supported	= 0
} e_EUTRA_5GC_Parameters_r15__eutra_EPC_HO_EUTRA_5GC_r15;
typedef enum EUTRA_5GC_Parameters_r15__ho_EUTRA_5GC_FDD_TDD_r15 {
	EUTRA_5GC_Parameters_r15__ho_EUTRA_5GC_FDD_TDD_r15_supported	= 0
} e_EUTRA_5GC_Parameters_r15__ho_EUTRA_5GC_FDD_TDD_r15;
typedef enum EUTRA_5GC_Parameters_r15__ho_InterfreqEUTRA_5GC_r15 {
	EUTRA_5GC_Parameters_r15__ho_InterfreqEUTRA_5GC_r15_supported	= 0
} e_EUTRA_5GC_Parameters_r15__ho_InterfreqEUTRA_5GC_r15;
typedef enum EUTRA_5GC_Parameters_r15__ims_VoiceOverMCG_BearerEUTRA_5GC_r15 {
	EUTRA_5GC_Parameters_r15__ims_VoiceOverMCG_BearerEUTRA_5GC_r15_supported	= 0
} e_EUTRA_5GC_Parameters_r15__ims_VoiceOverMCG_BearerEUTRA_5GC_r15;
typedef enum EUTRA_5GC_Parameters_r15__inactiveState_r15 {
	EUTRA_5GC_Parameters_r15__inactiveState_r15_supported	= 0
} e_EUTRA_5GC_Parameters_r15__inactiveState_r15;
typedef enum EUTRA_5GC_Parameters_r15__reflectiveQoS_r15 {
	EUTRA_5GC_Parameters_r15__reflectiveQoS_r15_supported	= 0
} e_EUTRA_5GC_Parameters_r15__reflectiveQoS_r15;

/* EUTRA-5GC-Parameters-r15 */
typedef struct EUTRA_5GC_Parameters_r15 {
	long	*eutra_5GC_r15	/* OPTIONAL */;
	long	*eutra_EPC_HO_EUTRA_5GC_r15	/* OPTIONAL */;
	long	*ho_EUTRA_5GC_FDD_TDD_r15	/* OPTIONAL */;
	long	*ho_InterfreqEUTRA_5GC_r15	/* OPTIONAL */;
	long	*ims_VoiceOverMCG_BearerEUTRA_5GC_r15	/* OPTIONAL */;
	long	*inactiveState_r15	/* OPTIONAL */;
	long	*reflectiveQoS_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_5GC_Parameters_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_eutra_5GC_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_eutra_EPC_HO_EUTRA_5GC_r15_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ho_EUTRA_5GC_FDD_TDD_r15_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ho_InterfreqEUTRA_5GC_r15_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ims_VoiceOverMCG_BearerEUTRA_5GC_r15_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_inactiveState_r15_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_reflectiveQoS_r15_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_5GC_Parameters_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_EUTRA_5GC_Parameters_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_EUTRA_5GC_Parameters_r15_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_5GC_Parameters_r15_H_ */
#include <asn_internal.h>
