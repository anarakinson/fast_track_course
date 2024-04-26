/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MTC_SSB_NR_r15_H_
#define	_MTC_SSB_NR_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MTC_SSB_NR_r15__periodicityAndOffset_r15_PR {
	MTC_SSB_NR_r15__periodicityAndOffset_r15_PR_NOTHING,	/* No components present */
	MTC_SSB_NR_r15__periodicityAndOffset_r15_PR_sf5_r15,
	MTC_SSB_NR_r15__periodicityAndOffset_r15_PR_sf10_r15,
	MTC_SSB_NR_r15__periodicityAndOffset_r15_PR_sf20_r15,
	MTC_SSB_NR_r15__periodicityAndOffset_r15_PR_sf40_r15,
	MTC_SSB_NR_r15__periodicityAndOffset_r15_PR_sf80_r15,
	MTC_SSB_NR_r15__periodicityAndOffset_r15_PR_sf160_r15
} MTC_SSB_NR_r15__periodicityAndOffset_r15_PR;
typedef enum MTC_SSB_NR_r15__ssb_Duration_r15 {
	MTC_SSB_NR_r15__ssb_Duration_r15_sf1	= 0,
	MTC_SSB_NR_r15__ssb_Duration_r15_sf2	= 1,
	MTC_SSB_NR_r15__ssb_Duration_r15_sf3	= 2,
	MTC_SSB_NR_r15__ssb_Duration_r15_sf4	= 3,
	MTC_SSB_NR_r15__ssb_Duration_r15_sf5	= 4
} e_MTC_SSB_NR_r15__ssb_Duration_r15;

/* MTC-SSB-NR-r15 */
typedef struct MTC_SSB_NR_r15 {
	struct MTC_SSB_NR_r15__periodicityAndOffset_r15 {
		MTC_SSB_NR_r15__periodicityAndOffset_r15_PR present;
		union MTC_SSB_NR_r15__periodicityAndOffset_r15_u {
			long	 sf5_r15;
			long	 sf10_r15;
			long	 sf20_r15;
			long	 sf40_r15;
			long	 sf80_r15;
			long	 sf160_r15;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} periodicityAndOffset_r15;
	long	 ssb_Duration_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MTC_SSB_NR_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ssb_Duration_r15_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MTC_SSB_NR_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_MTC_SSB_NR_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_MTC_SSB_NR_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MTC_SSB_NR_r15_H_ */
#include <asn_internal.h>