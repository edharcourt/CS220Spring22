/* 
    unsigned int whatdoido(unsigned int n) {
    unsigned int sum = 0;

    while (n > 0) {
        sum = sum + (n & 1);
        n = n >> 1;
    }
    return sum;
}
*/
.global whatdoido
.text

whatdoido:
        mov     r1, #0
while:
        cmp     r0, #0
        beq endwhile
        and     r2, r0, #1
        lsr     r0, r0, #1
        add     r1, r1, r2
        b while 
endwhile:
        mov     r0, r1
        bx      lr
