/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_ReferenceTime_r15_H_
#define	_ReferenceTime_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ReferenceTime-r15 */
typedef struct ReferenceTime_r15 {
	long	 refDays_r15;
	long	 refSeconds_r15;
	long	 refMilliSeconds_r15;
	long	 refQuarterMicroSeconds_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReferenceTime_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReferenceTime_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_ReferenceTime_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_ReferenceTime_r15_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _ReferenceTime_r15_H_ */
#include <asn_internal.h>
