
/* 
  int max (int x, int y) {
      if (x > y)
          return x;

      return y;
  }
*/
.cpu cortex-a53
.global max
.text

max:
    cmp r0,r1  // setting the condition register cpsr
    ble else
    bx lr    // r0 is larger so just return 
else:
    mov r0, r1
    bx lr
