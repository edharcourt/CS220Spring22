
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
.text

dow:
    push { r4-r6 }   // save r4 on the stack
    mov r3, #14
    mov r4, #12
    mov r5, #100 
    mov r6, #400
    // pick up here next time
