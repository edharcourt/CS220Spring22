
.global simulate
.cpu cortex-a53
.data // allocate global memory

// a word is the width, in bytes, of the natural size of the machine.
// 4 bytes
.align 2
seedhack: .word 0
.align 2
.text

mod:
    sdiv r2, r0, r1
    mul  r2, r2, r1
    sub  r0, r0, r2
    bx lr


simulate:
   push { r4-r10,fp,lr } 
   mov r6, #366
   lsl r9, r6, #2
   mov r5, r0

   // local variable get stored on the stack if you can't put them 
   // in a register
   sub sp, sp, r9  // shift r1 by two and then subtract
   mov r7, sp // store starting address of array in r2
   ldr r4, =seedhack // put address of seedhack in r4 

   // read-modify-write
   ldr r8, [r4]      // get the value of seedhack 
   add r8, r8, #1
   str r8, [r4]      // put incremented value back in seedhack   

   // call time
   mov r0, #0  
   bl time
   add r0, r0, r8
   bl srand 

   // set up call to memset
   mov r0, r7
   mov r1, #0
   //mov r2, r9
   mov r2, r6, lsl #2
   bl memset

   mov r10, #0   // <- do we crash here? 
   // missing crud 
   add sp, sp, r9 
   pop {r4-r10,fp,lr}  
   bx lr
