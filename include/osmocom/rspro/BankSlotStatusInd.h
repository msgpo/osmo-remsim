/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RSPRO"
 * 	found in "../../asn1/RSPRO.asn"
 */

#ifndef	_BankSlotStatusInd_H_
#define	_BankSlotStatusInd_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/rspro/BankSlot.h>
#include <osmocom/rspro/ClientSlot.h>
#include <osmocom/rspro/SlotPhysStatus.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BankSlotStatusInd */
typedef struct BankSlotStatusInd {
	BankSlot_t	 fromBankSlot;
	ClientSlot_t	 toClientSlot;
	SlotPhysStatus_t	 slotPhysStatus;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BankSlotStatusInd_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BankSlotStatusInd;

#ifdef __cplusplus
}
#endif

#endif	/* _BankSlotStatusInd_H_ */
#include <asn_internal.h>