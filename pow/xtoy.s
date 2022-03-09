.cpu cortex-a53
.global xtoy
.text

xtoy:
    mov r2, #0 // i = 0
    mov r3, #1 // r = 1
 
while:
    cmp r2, r1
    bge endwhile
    mul r3, r3, r0
    add r2, r2, #1
    b while
   
endwhile:
    mov r0, r3
    bx lr
