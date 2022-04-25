#include "max_array.h"

int max(int x, int y) {
    if (x > y) 
        return x;
    else 
        return y;
}


// Compute the maximum element in vec, where the end
// of the array is marked with the vaule -1.
// Other than the last element you can assume vec 
// contains non-gegative values.
int max_array(int vec[], int i) {
    if (vec[i] == -1)
        return -1;
    else
        return max(vec[i], max_array(vec, i+1));
}
