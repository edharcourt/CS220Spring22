/*
int factor(int n) {
    int i = 2;
    while (i <= n) {
        if (n % i == 0)
            return i;
        i++;
    }
}
*/

.cpu cortex-a53
.global factor
.text


// x % y == x - (x/y)y
mod:
    sdiv r2, r0, r1
    mul  r2, r2, r1
    sub  r0, r0, r2
    bx lr

factor:
    push { r4, r5, lr }    
    mov r4, r0   // move n into r0
    mov r5, #2   // i = 2 
    
while:   // top of the while loop
    cmp r5, r4     
    bgt endwhile
    mov r0, r4   // set up arguments to mod 
    mov r1, r5
    bl mod
    cmp r0, #0 
    bne endif
    mov r0, r5       // return i
    pop {r4, r5, lr}
    bx lr
endif: 
    add r5, r5, #1
    b while          // jump to top of while loop 
endwhile:
    // never get here because eventually i == n and 
    // n % i == 0 and we will return above. 




