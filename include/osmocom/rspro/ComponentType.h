/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RSPRO"
 * 	found in "../../asn1/RSPRO.asn"
 */

#ifndef	_ComponentType_H_
#define	_ComponentType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ComponentType {
	ComponentType_remsimClient	= 0,
	ComponentType_remsimServer	= 1,
	ComponentType_remsimBankd	= 2
} e_ComponentType;

/* ComponentType */
typedef long	 ComponentType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ComponentType;
asn_struct_free_f ComponentType_free;
asn_struct_print_f ComponentType_print;
asn_constr_check_f ComponentType_constraint;
ber_type_decoder_f ComponentType_decode_ber;
der_type_encoder_f ComponentType_encode_der;
xer_type_decoder_f ComponentType_decode_xer;
xer_type_encoder_f ComponentType_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _ComponentType_H_ */
#include <asn_internal.h>
