#include "bigint.h"

int main(int argc, char *argv[]) {

    BigInt *x = make_int(argv[1]);
    print_int(x);
    free(x); 
}
