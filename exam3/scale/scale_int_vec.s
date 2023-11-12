/*
void scale(int *vec, int n) {
    int i = 0;
    while (i < n) {
        vec[i] = vec[i] * 3;
        i++;
    }
}
*/

.global scale
.text

scale:
    mov r2, #0
while:
    cmp r2, r3
    bge endwhile
    ldr r3, [r0]
    add r3, r3, r3, lsl #1 
    str r3, [r0]
    add r0, r0, #4
    add r2, r2, #1
    b while 
endwhile:
    bx lr
