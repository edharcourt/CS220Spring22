#include <stdio.h>
#include "float2bin.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {

    // TODO sanitize argv[1]
    char *frac = float2bin(atof(argv[1]));
    printf("%s\n", frac);
    free(frac);
}
