#include <stdio.h>

int main(void) {

    float x = .09;
    int * y = (int *) &x;  // cast
    printf("%X\n", *y);
}

