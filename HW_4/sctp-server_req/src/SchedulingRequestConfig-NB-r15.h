/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SchedulingRequestConfig_NB_r15_H_
#define	_SchedulingRequestConfig_NB_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SchedulingRequestConfig_NB_r15__sr_WithHARQ_ACK_Config_r15 {
	SchedulingRequestConfig_NB_r15__sr_WithHARQ_ACK_Config_r15_true	= 0
} e_SchedulingRequestConfig_NB_r15__sr_WithHARQ_ACK_Config_r15;

/* Forward declarations */
struct SR_WithoutHARQ_ACK_Config_NB_r15;
struct SR_SPS_BSR_Config_NB_r15;

/* SchedulingRequestConfig-NB-r15 */
typedef struct SchedulingRequestConfig_NB_r15 {
	long	*sr_WithHARQ_ACK_Config_r15	/* OPTIONAL */;
	struct SR_WithoutHARQ_ACK_Config_NB_r15	*sr_WithoutHARQ_ACK_Config_r15	/* OPTIONAL */;
	struct SR_SPS_BSR_Config_NB_r15	*sr_SPS_BSR_Config_r15	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SchedulingRequestConfig_NB_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sr_WithHARQ_ACK_Config_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SchedulingRequestConfig_NB_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_SchedulingRequestConfig_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SchedulingRequestConfig_NB_r15_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SchedulingRequestConfig_NB_r15_H_ */
#include <asn_internal.h>
