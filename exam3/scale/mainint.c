#include <stdio.h>

extern void scale(int *vec, int n);

void print_array(int *vec, int n) {
    for (int i = 0; i < n; i++)
        printf("%d\n", vec[i]);
}

int main() {

    int vec[] = {6,7,8,9};
    scale(vec, 4);
    print_array(vec, 4);

    return 0;
}
