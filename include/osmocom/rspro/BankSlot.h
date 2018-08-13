/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RSPRO"
 * 	found in "../../asn1/RSPRO.asn"
 */

#ifndef	_BankSlot_H_
#define	_BankSlot_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/rspro/BankId.h>
#include <osmocom/rspro/SlotNumber.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BankSlot */
typedef struct BankSlot {
	BankId_t	 bankId;
	SlotNumber_t	 slotNr;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BankSlot_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BankSlot;

#ifdef __cplusplus
}
#endif

#endif	/* _BankSlot_H_ */
#include <asn_internal.h>