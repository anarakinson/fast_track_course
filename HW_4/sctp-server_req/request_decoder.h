#ifndef REQUEST_DECODER 
#define REQUEST_DECODER

#include <RRCConnectionRequest.h>
#include <RRCConnectionSetup.h> /* request ASN.1 type */
#include <stdio.h>
#include <sys/types.h>


int decode_connection_request(char *buffer, size_t size /* , int type*/) {

    asn_dec_rval_t rval;        /* Decoder return value */
    RRCConnectionRequest_t *request = 0; /* Type to decode. Note this 01! */
    
    // Decode the input buffer as request type 
    rval = ber_decode(0, &asn_DEF_RRCConnectionRequest, (void **)&request, buffer, size);
    if (rval.code != RC_OK) {
        fprintf(stderr, "Broken request encoding at byte %ld\n", (long)rval.consumed);
        return 1;
    }

    // check request type
    if (request->criticalExtensions.present == RRCConnectionRequest__criticalExtensions_PR_rrcConnectionRequest_r8) {
        // read and print request data
        size_t buffsize = request->criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.size;
        uint8_t *respbuffer = request->criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.buf;
    
        printf("lenght: %ld \nmessage: %s\n", buffsize, respbuffer);
    } else {
        fprintf(stderr, "Wrong message format!\n");
        return 1;
    }

    // Print the decoded request type as XML 
    xer_fprint(stdout, &asn_DEF_RRCConnectionRequest, request);
    
    // Decoding finished successfully 
    return 0; 
}

int decode_connection_setup(char *buffer, size_t size /* , int type*/) {

    asn_dec_rval_t rval;        /* Decoder return value */
    RRCConnectionSetup_t *request = 0; /* Type to decode. Note this 01! */
    
    // Decode the input buffer as request type 
    rval = ber_decode(0, &asn_DEF_RRCConnectionSetup, (void **)&request, buffer, size);
    if (rval.code != RC_OK) {
        fprintf(stderr, "Broken request encoding at byte %ld\n", (long)rval.consumed);
        return 1;
    }
    
    // Print the decoded request type as XML 
    xer_fprint(stdout, &asn_DEF_RRCConnectionSetup, request);
    
    // Decoding finished successfully 
    return 0; 
}



#endif // REQUEST_DECODER