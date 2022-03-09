#include "xtoy.h"

int xtoy(int x, int y) {
    int i = 0;
    int r = 1;

    while (i < y) {
        r = r * x;
        i++;
    }
    return r;
} 
