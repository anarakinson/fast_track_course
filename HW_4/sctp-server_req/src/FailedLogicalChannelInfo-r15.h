/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_FailedLogicalChannelInfo_r15_H_
#define	_FailedLogicalChannelInfo_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FailedLogicalChannelInfo_r15__failedLogicalChannelIdentity_r15__cellGroupIndication_r15 {
	FailedLogicalChannelInfo_r15__failedLogicalChannelIdentity_r15__cellGroupIndication_r15_mn	= 0,
	FailedLogicalChannelInfo_r15__failedLogicalChannelIdentity_r15__cellGroupIndication_r15_sn	= 1
} e_FailedLogicalChannelInfo_r15__failedLogicalChannelIdentity_r15__cellGroupIndication_r15;
typedef enum FailedLogicalChannelInfo_r15__failureType {
	FailedLogicalChannelInfo_r15__failureType_duplication	= 0,
	FailedLogicalChannelInfo_r15__failureType_spare3	= 1,
	FailedLogicalChannelInfo_r15__failureType_spare2	= 2,
	FailedLogicalChannelInfo_r15__failureType_spare1	= 3
} e_FailedLogicalChannelInfo_r15__failureType;

/* FailedLogicalChannelInfo-r15 */
typedef struct FailedLogicalChannelInfo_r15 {
	struct FailedLogicalChannelInfo_r15__failedLogicalChannelIdentity_r15 {
		long	 cellGroupIndication_r15;
		long	*logicalChannelIdentity_r15	/* OPTIONAL */;
		long	*logicalChannelIdentityExt_r15	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} failedLogicalChannelIdentity_r15;
	long	 failureType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FailedLogicalChannelInfo_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cellGroupIndication_r15_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_failureType_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_FailedLogicalChannelInfo_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_FailedLogicalChannelInfo_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_FailedLogicalChannelInfo_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _FailedLogicalChannelInfo_r15_H_ */
#include <asn_internal.h>
