#include <stdio.h>
#include "f2c.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {

    // TODO validate command line args
    printf("%.2f\n", f2c(atof(argv[1])));
}
