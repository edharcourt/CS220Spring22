#include <stdio.h>
#include <stdlib.h>
#include "sqrt.h"

int main(int argc, char * argv[]) {

    // TODO sanitize the input
    //printf("%f\n", sqrt(atof(argv[1])));
    printf("%f\n", fabs(atof(argv[1])));
    return 0;
}
