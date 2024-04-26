/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_InitialUE_Identity_5GC_H_
#define	_InitialUE_Identity_5GC_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InitialUE_Identity_5GC_PR {
	InitialUE_Identity_5GC_PR_NOTHING,	/* No components present */
	InitialUE_Identity_5GC_PR_ng_5G_S_TMSI_Part1,
	InitialUE_Identity_5GC_PR_randomValue
} InitialUE_Identity_5GC_PR;

/* InitialUE-Identity-5GC */
typedef struct InitialUE_Identity_5GC {
	InitialUE_Identity_5GC_PR present;
	union InitialUE_Identity_5GC_u {
		BIT_STRING_t	 ng_5G_S_TMSI_Part1;
		BIT_STRING_t	 randomValue;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InitialUE_Identity_5GC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InitialUE_Identity_5GC;
extern asn_CHOICE_specifics_t asn_SPC_InitialUE_Identity_5GC_specs_1;
extern asn_TYPE_member_t asn_MBR_InitialUE_Identity_5GC_1[2];
extern asn_per_constraints_t asn_PER_type_InitialUE_Identity_5GC_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _InitialUE_Identity_5GC_H_ */
#include <asn_internal.h>
