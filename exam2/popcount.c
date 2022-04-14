#include <stdio.h>
#include <stdlib.h>

unsigned int whatdoido(unsigned int n) {
    unsigned int sum = 0;

    while (n > 0) {
        sum = sum + (n & 1);
        n = n >> 1;
    }
    return sum;
}

int main(int argc, char *argv[]) {
    printf("%u\n", whatdoido(atoi(argv[1])));
}
