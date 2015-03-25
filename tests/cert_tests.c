#include "minunit.h"
#include "stdio.h"
#include "polarssl/x509_crt.h"

char *test_SSL_verify_cert() 
{

    x509_crt crt;
    memset( &crt, 0, sizeof( x509_crt ) );

    x509_crt ca_crt;
    memset( &ca_crt, 0, sizeof( x509_crt ) );

    x509_crl crl;
    memset( &crl, 0, sizeof( x509_crl ) );

    int ret = 0;

    return NULL;
}

char * all_tests() {
    mu_suite_start();

    mu_run_test(test_SSL_verify_cert);

    return NULL;
}

RUN_TESTS(all_tests);

