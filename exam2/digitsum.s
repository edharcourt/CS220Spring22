.cpu cortex-a53
.global digitsum
.text

// compute r0 % r1
mod:
    sdiv r2, r0, r1
    mul  r2, r2, r1
    sub  r0, r0, r2
    bx lr

digitsum:
    push { r4-r6, lr }
    mov r4, r0  // save r0 because call mod
    mov r5, #0  // the digit sum 
    mov r6, #10 // constant 10 

while:
    cmp r4, #0
    beq endwhile
    mov r0, r4  // set up call to mod
    mov r1, #10     
    bl mod
    add r5, r5, r0 
    sdiv r4, r4, r6 
    b while
endwhile:
    mov r0, r5
    pop { r4-r6, pc }
