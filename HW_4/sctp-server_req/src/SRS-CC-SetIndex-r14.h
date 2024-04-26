/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SRS_CC_SetIndex_r14_H_
#define	_SRS_CC_SetIndex_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SRS-CC-SetIndex-r14 */
typedef struct SRS_CC_SetIndex_r14 {
	long	 cc_SetIndex_r14;
	long	 cc_IndexInOneCC_Set_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRS_CC_SetIndex_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRS_CC_SetIndex_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SRS_CC_SetIndex_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SRS_CC_SetIndex_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SRS_CC_SetIndex_r14_H_ */
#include <asn_internal.h>
