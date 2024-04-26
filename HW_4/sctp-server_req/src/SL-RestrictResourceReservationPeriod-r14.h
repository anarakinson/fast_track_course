/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SL_RestrictResourceReservationPeriod_r14_H_
#define	_SL_RestrictResourceReservationPeriod_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_RestrictResourceReservationPeriod_r14 {
	SL_RestrictResourceReservationPeriod_r14_v0dot2	= 0,
	SL_RestrictResourceReservationPeriod_r14_v0dot5	= 1,
	SL_RestrictResourceReservationPeriod_r14_v1	= 2,
	SL_RestrictResourceReservationPeriod_r14_v2	= 3,
	SL_RestrictResourceReservationPeriod_r14_v3	= 4,
	SL_RestrictResourceReservationPeriod_r14_v4	= 5,
	SL_RestrictResourceReservationPeriod_r14_v5	= 6,
	SL_RestrictResourceReservationPeriod_r14_v6	= 7,
	SL_RestrictResourceReservationPeriod_r14_v7	= 8,
	SL_RestrictResourceReservationPeriod_r14_v8	= 9,
	SL_RestrictResourceReservationPeriod_r14_v9	= 10,
	SL_RestrictResourceReservationPeriod_r14_v10	= 11,
	SL_RestrictResourceReservationPeriod_r14_spare4	= 12,
	SL_RestrictResourceReservationPeriod_r14_spare3	= 13,
	SL_RestrictResourceReservationPeriod_r14_spare2	= 14,
	SL_RestrictResourceReservationPeriod_r14_spare1	= 15
} e_SL_RestrictResourceReservationPeriod_r14;

/* SL-RestrictResourceReservationPeriod-r14 */
typedef long	 SL_RestrictResourceReservationPeriod_r14_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SL_RestrictResourceReservationPeriod_r14_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SL_RestrictResourceReservationPeriod_r14;
extern const asn_INTEGER_specifics_t asn_SPC_SL_RestrictResourceReservationPeriod_r14_specs_1;
asn_struct_free_f SL_RestrictResourceReservationPeriod_r14_free;
asn_struct_print_f SL_RestrictResourceReservationPeriod_r14_print;
asn_constr_check_f SL_RestrictResourceReservationPeriod_r14_constraint;
ber_type_decoder_f SL_RestrictResourceReservationPeriod_r14_decode_ber;
der_type_encoder_f SL_RestrictResourceReservationPeriod_r14_encode_der;
xer_type_decoder_f SL_RestrictResourceReservationPeriod_r14_decode_xer;
xer_type_encoder_f SL_RestrictResourceReservationPeriod_r14_encode_xer;
per_type_decoder_f SL_RestrictResourceReservationPeriod_r14_decode_uper;
per_type_encoder_f SL_RestrictResourceReservationPeriod_r14_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SL_RestrictResourceReservationPeriod_r14_H_ */
#include <asn_internal.h>
