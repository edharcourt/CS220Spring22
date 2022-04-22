#include <stdio.h>
#include "popcount.h"
extern double swap(double *, double *);

int main() {

    printf("%d\n", popcount(0b10011110));

    double x = 3.14159;
    double y = 2.71828;

    printf("%f %f\n", x, y);
    swap(&x,&y);
    printf("%f %f\n", x, y);
    return 0;
}
