#include <stdio.h>

extern void scale(double factor, double *vec, int n);

void print_array(double *vec, int n) {
    for (int i = 0; i < n; i++)
        printf("%f\n", vec[i]);
}

int main() {

    double vec[] = {6,7,8,9};
    scale(2.0, vec, 4);
    print_array(vec, 4);

    return 0;
}
