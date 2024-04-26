/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_DC_Parameters_r12_H_
#define	_DC_Parameters_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DC_Parameters_r12__drb_TypeSplit_r12 {
	DC_Parameters_r12__drb_TypeSplit_r12_supported	= 0
} e_DC_Parameters_r12__drb_TypeSplit_r12;
typedef enum DC_Parameters_r12__drb_TypeSCG_r12 {
	DC_Parameters_r12__drb_TypeSCG_r12_supported	= 0
} e_DC_Parameters_r12__drb_TypeSCG_r12;

/* DC-Parameters-r12 */
typedef struct DC_Parameters_r12 {
	long	*drb_TypeSplit_r12	/* OPTIONAL */;
	long	*drb_TypeSCG_r12	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DC_Parameters_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_drb_TypeSplit_r12_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_drb_TypeSCG_r12_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DC_Parameters_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_DC_Parameters_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_DC_Parameters_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _DC_Parameters_r12_H_ */
#include <asn_internal.h>
