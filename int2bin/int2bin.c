#include <stdio.h>
#include "int2bin.h"

void int2bin(int n) {
    // base case
    if (n == 0) {
        printf("0");
    }
    else {
        int2bin(n >> 1);     // n / 2
        printf("%d", n & 1); // n % 2
    }
}
