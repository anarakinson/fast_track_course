/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PreambleTransMax_H_
#define	_PreambleTransMax_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PreambleTransMax {
	PreambleTransMax_n3	= 0,
	PreambleTransMax_n4	= 1,
	PreambleTransMax_n5	= 2,
	PreambleTransMax_n6	= 3,
	PreambleTransMax_n7	= 4,
	PreambleTransMax_n8	= 5,
	PreambleTransMax_n10	= 6,
	PreambleTransMax_n20	= 7,
	PreambleTransMax_n50	= 8,
	PreambleTransMax_n100	= 9,
	PreambleTransMax_n200	= 10
} e_PreambleTransMax;

/* PreambleTransMax */
typedef long	 PreambleTransMax_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PreambleTransMax_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PreambleTransMax;
extern const asn_INTEGER_specifics_t asn_SPC_PreambleTransMax_specs_1;
asn_struct_free_f PreambleTransMax_free;
asn_struct_print_f PreambleTransMax_print;
asn_constr_check_f PreambleTransMax_constraint;
ber_type_decoder_f PreambleTransMax_decode_ber;
der_type_encoder_f PreambleTransMax_encode_der;
xer_type_decoder_f PreambleTransMax_decode_xer;
xer_type_encoder_f PreambleTransMax_encode_xer;
per_type_decoder_f PreambleTransMax_decode_uper;
per_type_encoder_f PreambleTransMax_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PreambleTransMax_H_ */
#include <asn_internal.h>
