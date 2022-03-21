#include "sum.h"

int sum(int vec[], int n) {
    int sum = 0;
    int i = 0;

    while (i < n) 
        sum = sum + vec[i++];

    return sum;
}
