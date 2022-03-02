#include <stdio.h>
#include "randrange.h"
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    printf("%d\n", randrange(-10,10));
}
