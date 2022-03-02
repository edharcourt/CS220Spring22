// Our first assembly language program

// r0 is a four byte integer built in to the CPU
// r0 - r15 are 16 four byte integers built in 
// to the CPU.  

.global sqr   // make the sqr label visible outside of this file

.text         // start of the code

sqr:          // define the sqr symbol (label)
              // the first argument gets passed into register r0
              // return value get s returned in register r0
    mul r0, r0, r0   // r0 = r * r0
    bx lr     // return to where called from 
              // branch-and-exchange the link register
