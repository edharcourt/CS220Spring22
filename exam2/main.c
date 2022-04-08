#include <stdio.h>
#include <stdlib.h>

extern unsigned int digitsum(unsigned int n);

int main(int argc, char *argv[]) {

    printf("%u\n", digitsum(atoi(argv[1])));

}
