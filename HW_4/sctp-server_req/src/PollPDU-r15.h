/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PollPDU_r15_H_
#define	_PollPDU_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PollPDU_r15 {
	PollPDU_r15_p4	= 0,
	PollPDU_r15_p8	= 1,
	PollPDU_r15_p16	= 2,
	PollPDU_r15_p32	= 3,
	PollPDU_r15_p64	= 4,
	PollPDU_r15_p128	= 5,
	PollPDU_r15_p256	= 6,
	PollPDU_r15_p512	= 7,
	PollPDU_r15_p1024	= 8,
	PollPDU_r15_p2048_r15	= 9,
	PollPDU_r15_p4096_r15	= 10,
	PollPDU_r15_p6144_r15	= 11,
	PollPDU_r15_p8192_r15	= 12,
	PollPDU_r15_p12288_r15	= 13,
	PollPDU_r15_p16384_r15	= 14,
	PollPDU_r15_pInfinity	= 15
} e_PollPDU_r15;

/* PollPDU-r15 */
typedef long	 PollPDU_r15_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PollPDU_r15_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PollPDU_r15;
extern const asn_INTEGER_specifics_t asn_SPC_PollPDU_r15_specs_1;
asn_struct_free_f PollPDU_r15_free;
asn_struct_print_f PollPDU_r15_print;
asn_constr_check_f PollPDU_r15_constraint;
ber_type_decoder_f PollPDU_r15_decode_ber;
der_type_encoder_f PollPDU_r15_encode_der;
xer_type_decoder_f PollPDU_r15_decode_xer;
xer_type_encoder_f PollPDU_r15_encode_xer;
per_type_decoder_f PollPDU_r15_decode_uper;
per_type_encoder_f PollPDU_r15_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PollPDU_r15_H_ */
#include <asn_internal.h>
