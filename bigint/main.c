#include "bigint.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {

    // TODO sanitize
    BigInt *x = make_int(argv[1]);
    BigInt *y = make_int(argv[2]);
    BigInt *z = add(x,y);
    print_int(z);
    free(x); 
    free(y); 
    free(z); 

    return 0;
}
