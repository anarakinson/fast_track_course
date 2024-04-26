/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCConnectionReconfiguration_v1310_IEs_H_
#define	_RRCConnectionReconfiguration_v1310_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SCellToReleaseListExt_r13;
struct SCellToAddModListExt_r13;
struct LWA_Configuration_r13;
struct LWIP_Configuration_r13;
struct RCLWI_Configuration_r13;
struct RRCConnectionReconfiguration_v1430_IEs;

/* RRCConnectionReconfiguration-v1310-IEs */
typedef struct RRCConnectionReconfiguration_v1310_IEs {
	struct SCellToReleaseListExt_r13	*sCellToReleaseListExt_r13	/* OPTIONAL */;
	struct SCellToAddModListExt_r13	*sCellToAddModListExt_r13	/* OPTIONAL */;
	struct LWA_Configuration_r13	*lwa_Configuration_r13	/* OPTIONAL */;
	struct LWIP_Configuration_r13	*lwip_Configuration_r13	/* OPTIONAL */;
	struct RCLWI_Configuration_r13	*rclwi_Configuration_r13	/* OPTIONAL */;
	struct RRCConnectionReconfiguration_v1430_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfiguration_v1310_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_v1310_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfiguration_v1310_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReconfiguration_v1310_IEs_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReconfiguration_v1310_IEs_H_ */
#include <asn_internal.h>
