/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType1_v10l0_IEs_H_
#define	_SystemInformationBlockType1_v10l0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NS_PmaxList_v10l0;
struct MultiBandInfoList_v10l0;

/* SystemInformationBlockType1-v10l0-IEs */
typedef struct SystemInformationBlockType1_v10l0_IEs {
	struct NS_PmaxList_v10l0	*freqBandInfo_v10l0	/* OPTIONAL */;
	struct MultiBandInfoList_v10l0	*multiBandInfoList_v10l0	/* OPTIONAL */;
	struct SystemInformationBlockType1_v10l0_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType1_v10l0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_v10l0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_v10l0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_v10l0_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType1_v10l0_IEs_H_ */
#include <asn_internal.h>
