/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_ShortTTI_Length_r15_H_
#define	_ShortTTI_Length_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ShortTTI_Length_r15 {
	ShortTTI_Length_r15_slot	= 0,
	ShortTTI_Length_r15_subslot	= 1
} e_ShortTTI_Length_r15;

/* ShortTTI-Length-r15 */
typedef long	 ShortTTI_Length_r15_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ShortTTI_Length_r15_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ShortTTI_Length_r15;
extern const asn_INTEGER_specifics_t asn_SPC_ShortTTI_Length_r15_specs_1;
asn_struct_free_f ShortTTI_Length_r15_free;
asn_struct_print_f ShortTTI_Length_r15_print;
asn_constr_check_f ShortTTI_Length_r15_constraint;
ber_type_decoder_f ShortTTI_Length_r15_decode_ber;
der_type_encoder_f ShortTTI_Length_r15_encode_der;
xer_type_decoder_f ShortTTI_Length_r15_decode_xer;
xer_type_encoder_f ShortTTI_Length_r15_encode_xer;
per_type_decoder_f ShortTTI_Length_r15_decode_uper;
per_type_encoder_f ShortTTI_Length_r15_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ShortTTI_Length_r15_H_ */
#include <asn_internal.h>
