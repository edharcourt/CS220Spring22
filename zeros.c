#include <stdio.h>

int main() {

    int s = 0;
    int n = 40;

    while (n > 0) {
       s = s + !(n & 1);
       n = n >> 1;
    }
    printf("%d\n", s);
}

