#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

    float x = strtof(argv[1], NULL); 
    int * y = (int *) &x;  // cast
    printf("%f %X\n", x, *y);
}

