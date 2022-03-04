#include <stdio.h>
#include "max.h"
#include "inorder.h"

// unit test - test a function for specific parameters
int main() {
    printf("%d %d\n", max(4,10), max(10,4));
    printf("%d\n", inorder(5,6,7) == 1);
    printf("%d\n", inorder(5,5,7) == 0);
    printf("%d\n", inorder(5,6,4) == 0);
}
