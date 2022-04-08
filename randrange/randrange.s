

/*
int randrange(int x, int y) {
    return rand() % (y - x) + x;
}
*/

.global randrange
.global mod
.cpu cortex-a53
.text

// x % y == x - (x/y)y
mod: 
    sdiv r2, r0, r1
    mul  r2, r2, r1
    sub  r0, r0, r2
    bx lr

randrange:
    push {r4,r5,lr}   // save r4 and r5 x and y
    mov r4, r0
    mov r5, r1
    bl rand   // call rand  bl - branch and link
    sub r1, r5, r4             
    bl mod
    add r0,r0,r4  
    pop {r4,r5,pc}
    //bx lr

 






