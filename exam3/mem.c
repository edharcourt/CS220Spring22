#include <stdio.h>
#include <stdlib.h>
void f(int vec[], int n) {
    int x = 99;
    int *y = malloc(sizeof(int));
    static double pi = 3.14159;
    printf("%d %X %d %f\n", x, y, vec[3], pi + n); 
}
