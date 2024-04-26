#ifndef REQUEST_CODER  
#define REQUEST_CODER

#include <RRCConnectionRequest.h>
#include <RRCConnectionSetup.h>

#include <stdio.h>
#include <sys/types.h>


// enum для разных режимов
enum message_modes_enum {
    correct_mode,
    wrong_mode
};


// set request content
void set_connection_request_mode(RRCConnectionRequest_t *request, char *message, size_t mess_size, enum message_modes_enum mode) {
    
    if (mode == correct_mode) {
        request->criticalExtensions.present = RRCConnectionRequest__criticalExtensions_PR_rrcConnectionRequest_r8;
        
        request->criticalExtensions.choice.rrcConnectionRequest_r8.establishmentCause = 1;
        request->criticalExtensions.choice.rrcConnectionRequest_r8.spare.buf = "...";
        request->criticalExtensions.choice.rrcConnectionRequest_r8.spare.size = strlen("...");

        request->criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.present = InitialUE_Identity_PR_randomValue;
        request->criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.buf = message;
        request->criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.size = mess_size;

    } else if (mode == wrong_mode) {
        request->criticalExtensions.present = RRCConnectionRequest__criticalExtensions_PR_rrcConnectionRequest_r15;
        
        request->criticalExtensions.choice.rrcConnectionRequest_r15.establishmentCause = 1;
        request->criticalExtensions.choice.rrcConnectionRequest_r15.spare.buf = "...";
        request->criticalExtensions.choice.rrcConnectionRequest_r15.spare.size = strlen("...");

        request->criticalExtensions.choice.rrcConnectionRequest_r15.ue_Identity.present = InitialUE_Identity_5GC_PR_randomValue;
        request->criticalExtensions.choice.rrcConnectionRequest_r15.ue_Identity.choice.randomValue.buf = message;
        request->criticalExtensions.choice.rrcConnectionRequest_r15.ue_Identity.choice.randomValue.size = mess_size;

    }

}



int create_connection_request(char *buffer, size_t buffer_size, char *message, size_t mess_size, int message_mode) {
    // Type to encode
    RRCConnectionRequest_t *request = NULL; 
    // Encoder return value
    asn_enc_rval_t ec;      

    // Allocate the RRCConnectionRequest_t
    request = calloc(1, sizeof(RRCConnectionRequest_t)); /* not malloc! */
    if (!request) {
        perror("calloc() failed");
        return 1;
    }

    // Initialize the request members
    set_connection_request_mode(request, message, mess_size, message_mode);

    // Encode the request type as BER (DER) 
    ec = der_encode_to_buffer(&asn_DEF_RRCConnectionRequest, request, buffer, buffer_size);

    if (ec.encoded == -1) {
        fprintf(
            stderr, "Could not encode request(at %s)\n", ec.failed_type ? ec.failed_type->name : "unknown");
        return 1;
    } else {
        fprintf(stderr, "Created buffer with BER encoded request\n");
    }

    // Encoding finished successfully 
    return 0; 
}



int create_connection_setup(char *buffer, size_t buffer_size, char *message, size_t mess_size, int message_mode) {
    // Type to encode
    RRCConnectionSetup_t *request = NULL; 
    // Encoder return value
    asn_enc_rval_t ec;      

    // Allocate the RRCConnectionSetup_t
    request = calloc(1, sizeof(RRCConnectionSetup_t)); /* not malloc! */
    if (!request) {
        perror("calloc() failed");
        return 1;
    }

    // Initialize the request members
    request->criticalExtensions.present = RRCConnectionSetup__criticalExtensions_PR_c1;
    request->criticalExtensions.choice.c1.present = RRCConnectionSetup__criticalExtensions__c1_PR_rrcConnectionSetup_r8;

    // Encode the request type as BER (DER) 
    ec = der_encode_to_buffer(&asn_DEF_RRCConnectionSetup, request, buffer, buffer_size);

    if (ec.encoded == -1) {
        fprintf(stderr, "Could not encode request(at %s)\n", ec.failed_type ? ec.failed_type->name : "unknown");
        return 1;
    } else {
        fprintf(stderr, "Created buffer with BER encoded request\n");
    }

    // Encoding finished successfully 
    return 0; 
}


#endif // REQUEST_CODER
