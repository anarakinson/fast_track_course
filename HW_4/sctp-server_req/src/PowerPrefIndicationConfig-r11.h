/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PowerPrefIndicationConfig_r11_H_
#define	_PowerPrefIndicationConfig_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PowerPrefIndicationConfig_r11_PR {
	PowerPrefIndicationConfig_r11_PR_NOTHING,	/* No components present */
	PowerPrefIndicationConfig_r11_PR_release,
	PowerPrefIndicationConfig_r11_PR_setup
} PowerPrefIndicationConfig_r11_PR;
typedef enum PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11 {
	PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s0	= 0,
	PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s0dot5	= 1,
	PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s1	= 2,
	PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s2	= 3,
	PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s5	= 4,
	PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s10	= 5,
	PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s20	= 6,
	PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s30	= 7,
	PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s60	= 8,
	PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s90	= 9,
	PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s120	= 10,
	PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s300	= 11,
	PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s600	= 12,
	PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_spare3	= 13,
	PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_spare2	= 14,
	PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_spare1	= 15
} e_PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11;

/* PowerPrefIndicationConfig-r11 */
typedef struct PowerPrefIndicationConfig_r11 {
	PowerPrefIndicationConfig_r11_PR present;
	union PowerPrefIndicationConfig_r11_u {
		NULL_t	 release;
		struct PowerPrefIndicationConfig_r11__setup {
			long	 powerPrefIndicationTimer_r11;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PowerPrefIndicationConfig_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_powerPrefIndicationTimer_r11_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PowerPrefIndicationConfig_r11;
extern asn_CHOICE_specifics_t asn_SPC_PowerPrefIndicationConfig_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_PowerPrefIndicationConfig_r11_1[2];
extern asn_per_constraints_t asn_PER_type_PowerPrefIndicationConfig_r11_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _PowerPrefIndicationConfig_r11_H_ */
#include <asn_internal.h>
