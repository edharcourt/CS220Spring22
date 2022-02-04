#include <stdlib.h>
#include <stdio.h>


// function popcount returns the number of ones in the binary
// representation of x
int popcount(int x) {
    int sum = 0;

    while (x > 0) {
        sum = sum + (x & 1); 
        x = x >> 1;  // shift bits to the right
    }
    return sum;
}

int main(int argc, char *argv[]) {

    // user enters integer
    printf("%d\n", popcount(atoi(argv[1])));     
}
