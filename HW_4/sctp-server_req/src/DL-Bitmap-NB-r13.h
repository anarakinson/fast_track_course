/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_DL_Bitmap_NB_r13_H_
#define	_DL_Bitmap_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_Bitmap_NB_r13_PR {
	DL_Bitmap_NB_r13_PR_NOTHING,	/* No components present */
	DL_Bitmap_NB_r13_PR_subframePattern10_r13,
	DL_Bitmap_NB_r13_PR_subframePattern40_r13
} DL_Bitmap_NB_r13_PR;

/* DL-Bitmap-NB-r13 */
typedef struct DL_Bitmap_NB_r13 {
	DL_Bitmap_NB_r13_PR present;
	union DL_Bitmap_NB_r13_u {
		BIT_STRING_t	 subframePattern10_r13;
		BIT_STRING_t	 subframePattern40_r13;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_Bitmap_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_Bitmap_NB_r13;
extern asn_CHOICE_specifics_t asn_SPC_DL_Bitmap_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_DL_Bitmap_NB_r13_1[2];
extern asn_per_constraints_t asn_PER_type_DL_Bitmap_NB_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_Bitmap_NB_r13_H_ */
#include <asn_internal.h>
