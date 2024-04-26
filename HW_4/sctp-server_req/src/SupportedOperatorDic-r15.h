/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SupportedOperatorDic_r15_H_
#define	_SupportedOperatorDic_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "PLMN-Identity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SupportedOperatorDic-r15 */
typedef struct SupportedOperatorDic_r15 {
	long	 versionOfDictionary_r15;
	PLMN_Identity_t	 associatedPLMN_ID_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedOperatorDic_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedOperatorDic_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_SupportedOperatorDic_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SupportedOperatorDic_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedOperatorDic_r15_H_ */
#include <asn_internal.h>
