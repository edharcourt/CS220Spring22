
/*
int xtoy(int x, int y) {
    if (y == 0)
        return 1;
    else
        return x*xtoy(x, y-1);
}
*/
.global xtoy
.cpu cortex-a53
.text

xtoy:
    push { r4, r5, lr }
    mov r4, r0
    mov r5, r1

    cmp r5, #0
    bne else
    mov r0, #1
    pop {r4, r5, pc }  // trick to save one instruction bx lr

else:
    sub r1, r5, #1
    mov r0, r4
    bl xtoy
    mul r0, r4, r0
    pop {r4, r5, pc}
