#include <stdio.h>
#include <limits.h>

int main(void) {
   signed char i = 127;
   signed char x = CHAR_MAX;
   signed char xx = 0x7F;  // CHAR_MAX

   i = i + 1; 
   printf("%d\n", i);

   int j = 0b01111111111111111111111111111111;
   int k = INT_MAX;  // INT_MAX is the largest int
   int kk = 0x7FFFFFFF;  // INT_MAX

   printf("%d %d\n", j+1, k);

   unsigned int z = UINT_MAX;
   unsigned int zz = 0xFFFFFFFF; 
   printf("z=%u zz=%d\n", z+1, zz);

   int w = 79;
   printf("%d %d %d\n", w*-1, -w, ~w + 1);
}
