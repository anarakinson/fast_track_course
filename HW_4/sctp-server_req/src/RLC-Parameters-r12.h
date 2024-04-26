/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RLC_Parameters_r12_H_
#define	_RLC_Parameters_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RLC_Parameters_r12__extended_RLC_LI_Field_r12 {
	RLC_Parameters_r12__extended_RLC_LI_Field_r12_supported	= 0
} e_RLC_Parameters_r12__extended_RLC_LI_Field_r12;

/* RLC-Parameters-r12 */
typedef struct RLC_Parameters_r12 {
	long	 extended_RLC_LI_Field_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_Parameters_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_extended_RLC_LI_Field_r12_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RLC_Parameters_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_RLC_Parameters_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_RLC_Parameters_r12_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RLC_Parameters_r12_H_ */
#include <asn_internal.h>
