#include "bigint.h"
#include <stdlib.h>
#include <stdio.h>

// convert a hexadecimal character
// to its int equivalent
// precondition: x is a valid hex character
int hexval(char x) {
    if ('0' <= x && x <= '9') 
        return x - '0';        
    else if ('A' <= x && x <= 'F')
        return x - 'A' + 10;
    else
        return x - 'a' + 10;
}

// make_int("4F63BC")
// TODO when x has odd length
BigInt *make_int(const char *x) {

    BigInt *b = malloc(sizeof(BigInt));
    b->n = strlen(x)/2;
    b->digits = malloc(b->n);

    for (int i = 0; i < b->n; i += 2){ 
        
        b->digits[i/2] = hexval(x[b->n*2 - 1 - i]);
        b->digits[i/2] |= hexval(x[b->n*2 - 2 - i]) << 4;
    }
    return b;
}

void print_hex(const BigInt *x) {
    // do later
}
