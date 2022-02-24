
/*
int dow(int m, int d, int y) {
    int y0 = y - (14 - m) / 12;
    int x = y0 + y0 / 4 - y0 / 100 + y0 / 400;
    int m0 = m + 12 * ((14 - m)/12) - 2;
    int d0 = (d + x + (31 * m0) / 12) % 7;
    return d0;
}
*/

.global dow   // exporting a symbol dow
.cpu cortex-a53
.text

dow:
    push { r4-r9 }   // save r4 on the stack
    mov r3, #14
    mov r4, #12
    mov r5, #100 
    mov r6, #400

    // compute y0 in to r2
    sub r7, r3, r0   // r7 = r3 - r0
    sdiv r7, r7, r4  // sdiv does not have flexible second spirce operand 
    sub r2, r2, r7   // y0
   
    // compute x in to r2 
    lsr r3, r2, #2   // compute y0/4
    sdiv r8, r2, r5  // compute y0/100 
    sdiv r9, r2, r6  // compute y0/400
    add r2, r2, r3   // y0 = y0 + y0/4
    sub r2, r2, r8   // y0 = y0 - y0/100 
    add r2, r2, r9

    // compute m0 in to r0
    mul r7, r4, r7  
    add r0, r0, r7 
    sub r0, r0, #2

    mov r7, #31
    mul r7, r7, r0 
    sdiv r7, r7, r4 
    add r7, r7, r2
    add r7, r7, r1
    
    // compute r7 % 7   q = r7/7  r = r7 - q*7
    mov r8, #7
    sdiv r6, r7, r8   // r6 = r7/7 
    mul r6, r6, r8
    sub r0, r7, r6

    pop {r4 - r9}
    bx lr   // return 



