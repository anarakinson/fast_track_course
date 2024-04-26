/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_TrafficPatternInfo_r14_H_
#define	_TrafficPatternInfo_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "SL-Priority-r13.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TrafficPatternInfo_r14__trafficPeriodicity_r14 {
	TrafficPatternInfo_r14__trafficPeriodicity_r14_sf20	= 0,
	TrafficPatternInfo_r14__trafficPeriodicity_r14_sf50	= 1,
	TrafficPatternInfo_r14__trafficPeriodicity_r14_sf100	= 2,
	TrafficPatternInfo_r14__trafficPeriodicity_r14_sf200	= 3,
	TrafficPatternInfo_r14__trafficPeriodicity_r14_sf300	= 4,
	TrafficPatternInfo_r14__trafficPeriodicity_r14_sf400	= 5,
	TrafficPatternInfo_r14__trafficPeriodicity_r14_sf500	= 6,
	TrafficPatternInfo_r14__trafficPeriodicity_r14_sf600	= 7,
	TrafficPatternInfo_r14__trafficPeriodicity_r14_sf700	= 8,
	TrafficPatternInfo_r14__trafficPeriodicity_r14_sf800	= 9,
	TrafficPatternInfo_r14__trafficPeriodicity_r14_sf900	= 10,
	TrafficPatternInfo_r14__trafficPeriodicity_r14_sf1000	= 11
} e_TrafficPatternInfo_r14__trafficPeriodicity_r14;

/* TrafficPatternInfo-r14 */
typedef struct TrafficPatternInfo_r14 {
	long	 trafficPeriodicity_r14;
	long	 timingOffset_r14;
	SL_Priority_r13_t	*priorityInfoSL_r14	/* OPTIONAL */;
	long	*logicalChannelIdentityUL_r14	/* OPTIONAL */;
	BIT_STRING_t	 messageSize_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrafficPatternInfo_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_trafficPeriodicity_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_TrafficPatternInfo_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_TrafficPatternInfo_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_TrafficPatternInfo_r14_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _TrafficPatternInfo_r14_H_ */
#include <asn_internal.h>
