/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_BandParameters_v1450_H_
#define	_BandParameters_v1450_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MUST_Parameters_r14;

/* BandParameters-v1450 */
typedef struct BandParameters_v1450 {
	struct MUST_Parameters_r14	*must_CapabilityPerBand_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandParameters_v1450_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandParameters_v1450;
extern asn_SEQUENCE_specifics_t asn_SPC_BandParameters_v1450_specs_1;
extern asn_TYPE_member_t asn_MBR_BandParameters_v1450_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _BandParameters_v1450_H_ */
#include <asn_internal.h>
