#include "bigint.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

BigInt * make_int(const char *s) {

    BigInt *b = malloc(sizeof(BigInt));
    
    b->n = strlen(s);   // (*b).n = strlen(s); 
    b->digits = malloc(b->n);

    // copy digits from s into digits array
    for (int i = 0; i < b->n; i++) 
        b->digits[i] = s[b->n - 1 - i] - '0';

    return b;
}


void print_int(const BigInt *b) {

    for (int i = b->n - 1; i > -1; i--)
        printf("%hhd", b->digits[i]);

}
