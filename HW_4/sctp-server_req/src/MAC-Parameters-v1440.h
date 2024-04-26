/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MAC_Parameters_v1440_H_
#define	_MAC_Parameters_v1440_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MAC_Parameters_v1440__rai_Support_r14 {
	MAC_Parameters_v1440__rai_Support_r14_supported	= 0
} e_MAC_Parameters_v1440__rai_Support_r14;

/* MAC-Parameters-v1440 */
typedef struct MAC_Parameters_v1440 {
	long	*rai_Support_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_Parameters_v1440_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rai_Support_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MAC_Parameters_v1440;
extern asn_SEQUENCE_specifics_t asn_SPC_MAC_Parameters_v1440_specs_1;
extern asn_TYPE_member_t asn_MBR_MAC_Parameters_v1440_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MAC_Parameters_v1440_H_ */
#include <asn_internal.h>
