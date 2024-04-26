/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PeriodicBSR_Timer_NB_r13_H_
#define	_PeriodicBSR_Timer_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PeriodicBSR_Timer_NB_r13 {
	PeriodicBSR_Timer_NB_r13_pp2	= 0,
	PeriodicBSR_Timer_NB_r13_pp4	= 1,
	PeriodicBSR_Timer_NB_r13_pp8	= 2,
	PeriodicBSR_Timer_NB_r13_pp16	= 3,
	PeriodicBSR_Timer_NB_r13_pp64	= 4,
	PeriodicBSR_Timer_NB_r13_pp128	= 5,
	PeriodicBSR_Timer_NB_r13_infinity	= 6,
	PeriodicBSR_Timer_NB_r13_spare	= 7
} e_PeriodicBSR_Timer_NB_r13;

/* PeriodicBSR-Timer-NB-r13 */
typedef long	 PeriodicBSR_Timer_NB_r13_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PeriodicBSR_Timer_NB_r13_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PeriodicBSR_Timer_NB_r13;
extern const asn_INTEGER_specifics_t asn_SPC_PeriodicBSR_Timer_NB_r13_specs_1;
asn_struct_free_f PeriodicBSR_Timer_NB_r13_free;
asn_struct_print_f PeriodicBSR_Timer_NB_r13_print;
asn_constr_check_f PeriodicBSR_Timer_NB_r13_constraint;
ber_type_decoder_f PeriodicBSR_Timer_NB_r13_decode_ber;
der_type_encoder_f PeriodicBSR_Timer_NB_r13_encode_der;
xer_type_decoder_f PeriodicBSR_Timer_NB_r13_decode_xer;
xer_type_encoder_f PeriodicBSR_Timer_NB_r13_encode_xer;
per_type_decoder_f PeriodicBSR_Timer_NB_r13_decode_uper;
per_type_encoder_f PeriodicBSR_Timer_NB_r13_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PeriodicBSR_Timer_NB_r13_H_ */
#include <asn_internal.h>
