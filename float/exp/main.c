#include <stdio.h>
#include <stdlib.h>
#include <math.h>

extern double myexp(double x);

int main(int argc, char *argv[]) {
    double x = atof(argv[1]);
    printf("myexp(%f) = %f\n", x, myexp(x));
    printf("exp(%f) = %f\n", x, exp(x));
}
