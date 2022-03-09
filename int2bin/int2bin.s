#include <stdio.h>

/*
void int2bin(int n) {
    // base case
    if (n == 0) {
        printf("0");
    }
    else {
        int2bin(n/2);
        printf("%d", n % 2);
    }
}
*/
.cpu cortex-a53
.global int2bin
.data
fmt: .ascii "%d\000"

.text
.align 2


// x % y == x - (x/y)y
mod:
    sdiv r2, r0, r1
    mul  r2, r2, r1
    sub  r0, r0, r2
    bx lr

int2bin:
    push { r4, fp, lr }
    mov r4, r0

    cmp r4, #0
    bne else
    mov r0, #48
    bl putchar    
    b return
else: 
    lsr r0, r4, #1
    bl int2bin 
    ldr r0, =fmt
    and r1, r4, #1
    bl printf

return:
    pop { r4, fp, lr }
    bx lr
