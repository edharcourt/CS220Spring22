#include <stdio.h>
#include "multiplication.h"
#include <stdlib.h>

int main(int argc, char * argv[] ) {

    // TODO Verifying command line arguments
    u_int32_t x = atoi(argv[1]);
    u_int32_t y = atoi(argv[2]);

    printf("%llu\n", mult(x,y));

    return 0;
}
