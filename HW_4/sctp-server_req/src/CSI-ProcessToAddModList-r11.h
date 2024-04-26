/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CSI_ProcessToAddModList_r11_H_
#define	_CSI_ProcessToAddModList_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CSI_Process_r11;

/* CSI-ProcessToAddModList-r11 */
typedef struct CSI_ProcessToAddModList_r11 {
	A_SEQUENCE_OF(struct CSI_Process_r11) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_ProcessToAddModList_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_ProcessToAddModList_r11;
extern asn_SET_OF_specifics_t asn_SPC_CSI_ProcessToAddModList_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_ProcessToAddModList_r11_1[1];
extern asn_per_constraints_t asn_PER_type_CSI_ProcessToAddModList_r11_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_ProcessToAddModList_r11_H_ */
#include <asn_internal.h>
