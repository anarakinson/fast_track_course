/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_AltTTT_CellsToAddMod_r12_H_
#define	_AltTTT_CellsToAddMod_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "PhysCellIdRange.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AltTTT-CellsToAddMod-r12 */
typedef struct AltTTT_CellsToAddMod_r12 {
	long	 cellIndex_r12;
	PhysCellIdRange_t	 physCellIdRange_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AltTTT_CellsToAddMod_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AltTTT_CellsToAddMod_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_AltTTT_CellsToAddMod_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_AltTTT_CellsToAddMod_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _AltTTT_CellsToAddMod_r12_H_ */
#include <asn_internal.h>
