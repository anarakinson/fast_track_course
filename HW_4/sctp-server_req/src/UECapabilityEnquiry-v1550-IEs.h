/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UECapabilityEnquiry_v1550_IEs_H_
#define	_UECapabilityEnquiry_v1550_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UECapabilityEnquiry_v1560_IEs;

/* UECapabilityEnquiry-v1550-IEs */
typedef struct UECapabilityEnquiry_v1550_IEs {
	OCTET_STRING_t	*requestedCapabilityNR_r15	/* OPTIONAL */;
	struct UECapabilityEnquiry_v1560_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityEnquiry_v1550_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityEnquiry_v1550_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UECapabilityEnquiry_v1550_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UECapabilityEnquiry_v1550_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UECapabilityEnquiry_v1550_IEs_H_ */
#include <asn_internal.h>
