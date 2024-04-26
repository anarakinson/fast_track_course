/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_NZP_FrequencyDensity_r14_H_
#define	_NZP_FrequencyDensity_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NZP_FrequencyDensity_r14 {
	NZP_FrequencyDensity_r14_d1	= 0,
	NZP_FrequencyDensity_r14_d2	= 1,
	NZP_FrequencyDensity_r14_d3	= 2
} e_NZP_FrequencyDensity_r14;

/* NZP-FrequencyDensity-r14 */
typedef long	 NZP_FrequencyDensity_r14_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NZP_FrequencyDensity_r14_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NZP_FrequencyDensity_r14;
extern const asn_INTEGER_specifics_t asn_SPC_NZP_FrequencyDensity_r14_specs_1;
asn_struct_free_f NZP_FrequencyDensity_r14_free;
asn_struct_print_f NZP_FrequencyDensity_r14_print;
asn_constr_check_f NZP_FrequencyDensity_r14_constraint;
ber_type_decoder_f NZP_FrequencyDensity_r14_decode_ber;
der_type_encoder_f NZP_FrequencyDensity_r14_encode_der;
xer_type_decoder_f NZP_FrequencyDensity_r14_decode_xer;
xer_type_encoder_f NZP_FrequencyDensity_r14_encode_xer;
per_type_decoder_f NZP_FrequencyDensity_r14_decode_uper;
per_type_encoder_f NZP_FrequencyDensity_r14_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _NZP_FrequencyDensity_r14_H_ */
#include <asn_internal.h>
