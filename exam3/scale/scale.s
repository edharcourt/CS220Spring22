.global scale
.text
scale:
    mov r2, #0          // i - loop counter

while:
    cmp r2, r1          // loop condition, r1 has size of array
    bge endwhile
    lsl r3, r2, #3      // r3 is the offset into the array   
    add r3, r0, r3      // address of element i
    vldr.f64 d1, [r3]   // vec[i]
    vmul.f64 d1, d1, d0
    vstr.f64 d1, [r3]
    add r2, r2, #1
    b while 

endwhile:
    bx lr
