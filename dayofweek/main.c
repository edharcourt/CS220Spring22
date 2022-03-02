#include <stdio.h>
#include "dow.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {

    // TODO verify the number of arguments

    int month = atoi(argv[1]); 
    int day = atoi(argv[2]); 
    int year = atoi(argv[3]); 

    printf("%d\n", dow(month, day, year));
}
