/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc.asn1"
 * 	`asn1c -D src -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasResultSCG_FailureMRDC_r15_H_
#define	_MeasResultSCG_FailureMRDC_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasResultList3EUTRA-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultSCG-FailureMRDC-r15 */
typedef struct MeasResultSCG_FailureMRDC_r15 {
	MeasResultList3EUTRA_r15_t	 measResultFreqListEUTRA_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultSCG_FailureMRDC_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultSCG_FailureMRDC_r15;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultSCG_FailureMRDC_r15_H_ */
#include <asn_internal.h>
