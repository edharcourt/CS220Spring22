/*
int c2f(int c) {
    return 32 + c*9/5;
}
*/
.cpu cortex-a53
.global c2f
.text

c2f:
    mov r1, #9
    mov r2, #5
    mul r0, r0, r1
    sdiv r0, r0, r2
    add r0, r0, #32 
    bx lr
