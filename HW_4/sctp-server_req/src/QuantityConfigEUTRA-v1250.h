/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_QuantityConfigEUTRA_v1250_H_
#define	_QuantityConfigEUTRA_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FilterCoefficient.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* QuantityConfigEUTRA-v1250 */
typedef struct QuantityConfigEUTRA_v1250 {
	FilterCoefficient_t	*filterCoefficientCSI_RSRP_r12	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QuantityConfigEUTRA_v1250_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QuantityConfigEUTRA_v1250;
extern asn_SEQUENCE_specifics_t asn_SPC_QuantityConfigEUTRA_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_QuantityConfigEUTRA_v1250_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _QuantityConfigEUTRA_v1250_H_ */
#include <asn_internal.h>
