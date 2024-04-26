#ifndef REQUEST_DECODER 
#define REQUEST_DECODER

#include <RRCConnectionRequest.h>
#include <RRCConnectionSetup.h> 
#include <stdio.h>
#include <sys/types.h>


// декодируем сообщение RRCConnectionRequest
int decode_connection_request(char *buffer, size_t size) {

    asn_dec_rval_t rval;        /* Decoder return value */
    RRCConnectionRequest_t *request = 0; /* Type to decode. Note this 01! */

    // декодируем полученное сообщение
    rval = ber_decode(0, &asn_DEF_RRCConnectionRequest, (void **)&request, buffer, size);
    if (rval.code != RC_OK) {
        fprintf(stderr, "Broken request encoding at byte %ld\n", (long)rval.consumed);
        return 1;
    }

    // проверяем, соответствует ли сообщение требуемому типу
    if (request->criticalExtensions.present == RRCConnectionRequest__criticalExtensions_PR_rrcConnectionRequest_r8) {
        // считываем поля сообщения
        size_t buffsize = request->criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.size;
        uint8_t *respbuffer = request->criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.buf;
    
        printf("lenght: %ld \nmessage: %s\n", buffsize, respbuffer);
    } else {
        fprintf(stderr, "Wrong message format!\n");
        return 1;
    }

    // выводим декодированное сообщение в формате XML 
    xer_fprint(stdout, &asn_DEF_RRCConnectionRequest, request);
    
    // декодировка завершена успешно
    return 0; 
}


// декодируем сообщение RRCConnectionSetup
int decode_connection_setup(char *buffer, size_t size) {

    asn_dec_rval_t rval;        /* Decoder return value */
    RRCConnectionSetup_t *request = 0; /* Type to decode. Note this 01! */
    
    // декодируем полученное сообщение
    rval = ber_decode(0, &asn_DEF_RRCConnectionSetup, (void **)&request, buffer, size);
    if (rval.code != RC_OK) {
        fprintf(stderr, "Broken request encoding at byte %ld\n", (long)rval.consumed);
        return 1;
    }
    
    // выводим декодированное сообщение в формате XML 
    xer_fprint(stdout, &asn_DEF_RRCConnectionSetup, request);
    
    // декодировка завершена успешно
    return 0; 
}



#endif // REQUEST_DECODER