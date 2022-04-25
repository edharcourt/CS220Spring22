/*
int popcount(unsigned int n) {
    if (n == 0)
        return 0;
    else
        return popcount(n >> 1) + (n & 1);
}
*/

.global popcount
.text

popcount:
    push { r4, lr }
    mov r4, r0       // save n in r4 

    cmp r4, #0       // base case
    bne else
    mov r0, #0
    pop { r4, pc }
else:                // recursive case
    lsr r0, r4, #1
    bl popcount
    and r1, r4, #1
    add r0, r0, r1
    pop { r4, pc }
