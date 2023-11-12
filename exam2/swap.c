#include <stdio.h>

void swap (int *p1, int *p2) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}


int main() {
    int x = 5; int y = 6;
    swap(&x,&y);
    return 0;
}
