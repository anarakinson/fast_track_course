/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_Format5_resource_r13_H_
#define	_Format5_resource_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Format5-resource-r13 */
typedef struct Format5_resource_r13 {
	long	 startingPRB_format5_r13;
	long	 cdm_index_format5_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Format5_resource_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Format5_resource_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_Format5_resource_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_Format5_resource_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Format5_resource_r13_H_ */
#include <asn_internal.h>
