/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SystemInformationBlockPos_r15_H_
#define	_SystemInformationBlockPos_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SystemInformationBlockPos-r15 */
typedef struct SystemInformationBlockPos_r15 {
	OCTET_STRING_t	 assistanceDataSIB_Element_r15;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockPos_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockPos_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockPos_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockPos_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockPos_r15_H_ */
#include <asn_internal.h>
