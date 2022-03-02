// main.c 

#include "f2c.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("%.2f\n", f2c(atof(argv[1])));
}
