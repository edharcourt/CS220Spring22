#include "adder.h"
#include <stdio.h>

int main(int argc, char * argv[]) {

    printf("%d\n", add(12, 17));
    printf("%X\n", rev(0xDEADBEEF));
    printf("%X\n", revr(0xF77DB57B, 0));
}
