#include "adder.h"
#include <stdlib.h>

// make a type for a bit
typedef u_int32_t bit_t;

// reverse the bits in x
u_int32_t rev(u_int32_t x) {

  // study question: use bit operations only. Don't 
  // convert to string or use an array.

}

u_int32_t add(u_int32_t x, u_int32_t y) {

    u_int32_t s = 0;  // running sum
    bit_t C = 0;      // initial carry-in is a 0


    for (int i = 0; i < 32; i++) {
        bit_t X = x & 1;
        bit_t Y = y & 1;
        bit_t S = X ^ Y ^ C; 
        C = (X & Y) | (X & C) | (Y & C);
        x = x >> 1;
        y = y >> 1;      

        // get S into s
        //s = (s << 1) | S;
        s = (S << i) | s;  // don't use rev
    }
    //return rev(s);
    return s;
}
