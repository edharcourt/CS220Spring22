#include <stdio.h>
#include "factor.h"

int main(int argc, char *argv[]) {

     // TODO check argc
     // TODO check argv[1] is all digits 

     printf("%d\n", factor(77) == 7);
     printf("%d\n", factor(13) == 13);
     printf("%d\n", factor(54655093) == 7151);
     printf("%d\n", is_prime(54655093) == 0);
     printf("%d\n", is_prime(7151) == 1);
}
