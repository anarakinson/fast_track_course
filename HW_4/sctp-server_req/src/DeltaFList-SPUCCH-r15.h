/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_DeltaFList_SPUCCH_r15_H_
#define	_DeltaFList_SPUCCH_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DeltaFList_SPUCCH_r15_PR {
	DeltaFList_SPUCCH_r15_PR_NOTHING,	/* No components present */
	DeltaFList_SPUCCH_r15_PR_release,
	DeltaFList_SPUCCH_r15_PR_setup
} DeltaFList_SPUCCH_r15_PR;
typedef enum DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1_r15 {
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1_r15_deltaF_1	= 0,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1_r15_deltaF0	= 1,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1_r15_deltaF1	= 2,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1_r15_deltaF2	= 3,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1_r15_deltaF3	= 4,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1_r15_deltaF4	= 5,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1_r15_deltaF5	= 6,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1_r15_deltaF6	= 7
} e_DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1_r15;
typedef enum DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1a_r15 {
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1a_r15_deltaF1	= 0,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1a_r15_deltaF2	= 1,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1a_r15_deltaF3	= 2,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1a_r15_deltaF4	= 3,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1a_r15_deltaF5	= 4,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1a_r15_deltaF6	= 5,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1a_r15_deltaF7	= 6,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1a_r15_deltaF8	= 7
} e_DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1a_r15;
typedef enum DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1b_r15 {
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1b_r15_deltaF3	= 0,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1b_r15_deltaF4	= 1,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1b_r15_deltaF5	= 2,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1b_r15_deltaF6	= 3,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1b_r15_deltaF7	= 4,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1b_r15_deltaF8	= 5,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1b_r15_deltaF9	= 6,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1b_r15_deltaF10	= 7
} e_DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format1b_r15;
typedef enum DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format3_r15 {
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format3_r15_deltaF4	= 0,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format3_r15_deltaF5	= 1,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format3_r15_deltaF6	= 2,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format3_r15_deltaF7	= 3,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format3_r15_deltaF8	= 4,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format3_r15_deltaF9	= 5,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format3_r15_deltaF10	= 6,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format3_r15_deltaF11	= 7
} e_DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_Format3_r15;
typedef enum DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_RM_Format4_r15 {
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_RM_Format4_r15_deltaF13	= 0,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_RM_Format4_r15_deltaF14	= 1,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_RM_Format4_r15_deltaF15	= 2,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_RM_Format4_r15_deltaF16	= 3,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_RM_Format4_r15_deltaF17	= 4,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_RM_Format4_r15_deltaF18	= 5,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_RM_Format4_r15_deltaF19	= 6,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_RM_Format4_r15_deltaF20	= 7
} e_DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_RM_Format4_r15;
typedef enum DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_TBCC_Format4_r15 {
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_TBCC_Format4_r15_deltaF10	= 0,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_TBCC_Format4_r15_deltaF11	= 1,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_TBCC_Format4_r15_deltaF12	= 2,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_TBCC_Format4_r15_deltaF13	= 3,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_TBCC_Format4_r15_deltaF14	= 4,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_TBCC_Format4_r15_deltaF15	= 5,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_TBCC_Format4_r15_deltaF16	= 6,
	DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_TBCC_Format4_r15_deltaF17	= 7
} e_DeltaFList_SPUCCH_r15__setup__deltaF_slotSPUCCH_TBCC_Format4_r15;
typedef enum DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_Format1and1a_r15 {
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_Format1and1a_r15_deltaF5	= 0,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_Format1and1a_r15_deltaF6	= 1,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_Format1and1a_r15_deltaF7	= 2,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_Format1and1a_r15_deltaF8	= 3,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_Format1and1a_r15_deltaF9	= 4,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_Format1and1a_r15_deltaF10	= 5,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_Format1and1a_r15_deltaF11	= 6,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_Format1and1a_r15_deltaF12	= 7
} e_DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_Format1and1a_r15;
typedef enum DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_Format1b_r15 {
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_Format1b_r15_deltaF6	= 0,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_Format1b_r15_deltaF7	= 1,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_Format1b_r15_deltaF8	= 2,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_Format1b_r15_deltaF9	= 3,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_Format1b_r15_deltaF10	= 4,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_Format1b_r15_deltaF11	= 5,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_Format1b_r15_deltaF12	= 6,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_Format1b_r15_deltaF13	= 7
} e_DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_Format1b_r15;
typedef enum DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_RM_Format4_r15 {
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_RM_Format4_r15_deltaF15	= 0,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_RM_Format4_r15_deltaF16	= 1,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_RM_Format4_r15_deltaF17	= 2,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_RM_Format4_r15_deltaF18	= 3,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_RM_Format4_r15_deltaF19	= 4,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_RM_Format4_r15_deltaF20	= 5,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_RM_Format4_r15_deltaF21	= 6,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_RM_Format4_r15_deltaF22	= 7
} e_DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_RM_Format4_r15;
typedef enum DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_TBCC_Format4_r15 {
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_TBCC_Format4_r15_deltaF10	= 0,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_TBCC_Format4_r15_deltaF11	= 1,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_TBCC_Format4_r15_deltaF12	= 2,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_TBCC_Format4_r15_deltaF13	= 3,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_TBCC_Format4_r15_deltaF14	= 4,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_TBCC_Format4_r15_deltaF15	= 5,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_TBCC_Format4_r15_deltaF16	= 6,
	DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_TBCC_Format4_r15_deltaF17	= 7
} e_DeltaFList_SPUCCH_r15__setup__deltaF_subslotSPUCCH_TBCC_Format4_r15;

/* DeltaFList-SPUCCH-r15 */
typedef struct DeltaFList_SPUCCH_r15 {
	DeltaFList_SPUCCH_r15_PR present;
	union DeltaFList_SPUCCH_r15_u {
		NULL_t	 release;
		struct DeltaFList_SPUCCH_r15__setup {
			long	*deltaF_slotSPUCCH_Format1_r15	/* OPTIONAL */;
			long	*deltaF_slotSPUCCH_Format1a_r15	/* OPTIONAL */;
			long	*deltaF_slotSPUCCH_Format1b_r15	/* OPTIONAL */;
			long	*deltaF_slotSPUCCH_Format3_r15	/* OPTIONAL */;
			long	*deltaF_slotSPUCCH_RM_Format4_r15	/* OPTIONAL */;
			long	*deltaF_slotSPUCCH_TBCC_Format4_r15	/* OPTIONAL */;
			long	*deltaF_subslotSPUCCH_Format1and1a_r15	/* OPTIONAL */;
			long	*deltaF_subslotSPUCCH_Format1b_r15	/* OPTIONAL */;
			long	*deltaF_subslotSPUCCH_RM_Format4_r15	/* OPTIONAL */;
			long	*deltaF_subslotSPUCCH_TBCC_Format4_r15	/* OPTIONAL */;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DeltaFList_SPUCCH_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaF_slotSPUCCH_Format1_r15_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaF_slotSPUCCH_Format1a_r15_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaF_slotSPUCCH_Format1b_r15_22;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaF_slotSPUCCH_Format3_r15_31;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaF_slotSPUCCH_RM_Format4_r15_40;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaF_slotSPUCCH_TBCC_Format4_r15_49;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaF_subslotSPUCCH_Format1and1a_r15_58;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaF_subslotSPUCCH_Format1b_r15_67;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaF_subslotSPUCCH_RM_Format4_r15_76;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaF_subslotSPUCCH_TBCC_Format4_r15_85;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DeltaFList_SPUCCH_r15;
extern asn_CHOICE_specifics_t asn_SPC_DeltaFList_SPUCCH_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_DeltaFList_SPUCCH_r15_1[2];
extern asn_per_constraints_t asn_PER_type_DeltaFList_SPUCCH_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _DeltaFList_SPUCCH_r15_H_ */
#include <asn_internal.h>
