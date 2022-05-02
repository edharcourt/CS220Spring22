.global f
.text

h:
    lsl r0, r0, #2
    bx lr

g:
    push { lr }
    add r0, r0, r1
    bl h
    pop { lr }
    bx lr

f:
    push { r4-r7,lr }
    mov r4, r0
    mov r5, r1
    mov r6, r2
    mov r0, #2
    bl h
    mov r7, r0
    mov r0, r4
    add r1, r5, r6
    bl g
    mul r0, r7, r0
    pop { r4-r7,lr }
    bx lr

