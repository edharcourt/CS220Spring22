#include <stdio.h>

int main(void) {

    float x = -127.3125;
    int * y = (int *) &x;  // cast
    printf("%X\n", *y);
}

