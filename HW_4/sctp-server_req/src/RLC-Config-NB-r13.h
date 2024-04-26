/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RLC_Config_NB_r13_H_
#define	_RLC_Config_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "UL-AM-RLC-NB-r13.h"
#include "DL-AM-RLC-NB-r13.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RLC_Config_NB_r13_PR {
	RLC_Config_NB_r13_PR_NOTHING,	/* No components present */
	RLC_Config_NB_r13_PR_am,
	/* Extensions may appear below */
	RLC_Config_NB_r13_PR_um_Bi_Directional_r15,
	RLC_Config_NB_r13_PR_um_Uni_Directional_UL_r15,
	RLC_Config_NB_r13_PR_um_Uni_Directional_DL_r15
} RLC_Config_NB_r13_PR;

/* RLC-Config-NB-r13 */
typedef struct RLC_Config_NB_r13 {
	RLC_Config_NB_r13_PR present;
	union RLC_Config_NB_r13_u {
		struct RLC_Config_NB_r13__am {
			UL_AM_RLC_NB_r13_t	 ul_AM_RLC_r13;
			DL_AM_RLC_NB_r13_t	 dl_AM_RLC_r13;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} am;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		NULL_t	 um_Bi_Directional_r15;
		NULL_t	 um_Uni_Directional_UL_r15;
		NULL_t	 um_Uni_Directional_DL_r15;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_Config_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLC_Config_NB_r13;
extern asn_CHOICE_specifics_t asn_SPC_RLC_Config_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_RLC_Config_NB_r13_1[4];
extern asn_per_constraints_t asn_PER_type_RLC_Config_NB_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RLC_Config_NB_r13_H_ */
#include <asn_internal.h>
