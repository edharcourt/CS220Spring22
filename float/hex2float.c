#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

    u_int32_t x = 0;
    sscanf(argv[1], "%x", &x);
    float * y = (float *) &x;  // cast
    printf("%f %X\n", *y, x);
}

