#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *float2bin(double f) {
    const int NUM_BITS = 67;
    // char r[NUM_BITS];   // <--- sneaky bug
    char *r = malloc(NUM_BITS);

    memset(r, 0, NUM_BITS);

    for (int i = 0; i < NUM_BITS - 1; i++) {
        f = 2*f;
        if (f >= 1.0) {
            strncat(r, "1", 2);
            f = f - 1.0;
        }
        else {
            strncat(r, "0", 2);
        }

        if (f == 0.0) 
            break;
    } // for
    return r;
}
