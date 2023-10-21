#include <iostream>
#include <iomanip>
#include <openssl/crypto.h>


int main(int, char**){
    OPENSSL_init();
    return 0;
}
