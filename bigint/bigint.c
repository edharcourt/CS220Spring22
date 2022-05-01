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

BigInt *make_zero(int n) {
    char tmp[n+1];
    memset(tmp, '0', n); 
    tmp[n] = 0;  // null terminate the string
    return make_int(tmp);
}

BigInt *add(const BigInt *x, const BigInt *y) {

    const BigInt *longer, *shorter;

    if (x->n > y->n) {
        longer = x;
        shorter = y;
    }
    else {
        longer = y;
        shorter = x;
    }

    BigInt *r = make_zero(longer->n + 1);

    int c = 0;
    int i = 0;   // loop counter

    while (i < shorter->n) {
        byte s = longer->digits[i] + shorter->digits[i] + c;
        r->digits[i] = s % 10;
        c = s / 10;
        i++;
    }

    // finish adding in the rest of the longer
    while (i < longer->n) {
        byte s = longer->digits[i] + c;
        r->digits[i] = s % 10;
        c = s / 10;
        i++;
    }

    r->digits[i] = c;  // add in final carry
    return r;
}

void print_int(const BigInt *b) {
    // TODO don't print leading zeros
    for (int i = b->n - 1; i > -1; i--)
        printf("%hhd", b->digits[i]);
}
