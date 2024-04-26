/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SRS_AntennaPort_H_
#define	_SRS_AntennaPort_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SRS_AntennaPort {
	SRS_AntennaPort_an1	= 0,
	SRS_AntennaPort_an2	= 1,
	SRS_AntennaPort_an4	= 2,
	SRS_AntennaPort_spare1	= 3
} e_SRS_AntennaPort;

/* SRS-AntennaPort */
typedef long	 SRS_AntennaPort_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SRS_AntennaPort_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SRS_AntennaPort;
extern const asn_INTEGER_specifics_t asn_SPC_SRS_AntennaPort_specs_1;
asn_struct_free_f SRS_AntennaPort_free;
asn_struct_print_f SRS_AntennaPort_print;
asn_constr_check_f SRS_AntennaPort_constraint;
ber_type_decoder_f SRS_AntennaPort_decode_ber;
der_type_encoder_f SRS_AntennaPort_encode_der;
xer_type_decoder_f SRS_AntennaPort_decode_xer;
xer_type_encoder_f SRS_AntennaPort_encode_xer;
per_type_decoder_f SRS_AntennaPort_decode_uper;
per_type_encoder_f SRS_AntennaPort_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SRS_AntennaPort_H_ */
#include <asn_internal.h>
