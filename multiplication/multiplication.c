#include "multiplication.h"

#include <stdlib.h>

u_int64_t mult(u_int32_t mcand, u_int32_t mplier) {

    u_int64_t result = 0;
    u_int64_t tmp_mcand = mcand;

    for (int i = 0; i < 32; i++) {
        if (mplier & 1) 
            result = result + tmp_mcand;

        tmp_mcand = tmp_mcand << 1;
        mplier = mplier >> 1;
    }
    return result;
} 
