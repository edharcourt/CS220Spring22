#include "simulate.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>


int simulate(int n) {
    const int DAYS = 366;
    int cal[DAYS];

    // a static variable retains its value (and memory)
    // across function calls
    // static variable are allocated to global memory
    static int seedhack = 0;
    srand(time(NULL) + seedhack++);
    memset(cal, 0, DAYS*sizeof(int));

    // assign n birthdays
    int i = 0;
    while (i < n) {
        cal[rand() % DAYS]++;
        i++;
    }


    i = 0;
    while (i < DAYS) {
        if (cal[i] > 1)
            return 1;
        i++;
    }

    return 0;
}
