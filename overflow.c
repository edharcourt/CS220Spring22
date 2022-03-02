#include <stdio.h>

int main() {
    signed char x, y, z;

    x = 90;
    y = 88;
    z = x + y;

    if (z > x) 
        printf("Foo\n");
    else
        printf("Bar\n"); 
}
