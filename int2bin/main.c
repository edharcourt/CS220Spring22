#include "int2bin.h"
#include <stdio.h>

int main(void) {

    //int2bin(8190); // should print 0111....1110

    // chapter 3
    int i;   // 32 bits, 4 bytes
    char j;  // 8 bits, byte
    long int k; // ?????
    long long int x; // ??????
    float y;
    double z;

    printf("int is %d bytes\n", sizeof(i));
    printf("short is %d bytes\n", sizeof(short));
    printf("char is %d bytes\n", sizeof(j));
    printf("long is %d bytes\n", sizeof(k));
    printf("long long is %d bytes\n", sizeof(x));
    printf("float is %d bytes\n", sizeof(y));
    printf("double is %d bytes\n", sizeof(z));
    printf("%x\n", -1);
}
