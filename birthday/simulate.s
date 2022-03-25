// static variables are stored in global memory
// local variables note allocated to registers are stored on the stack
// The read-modify-write operation is a fundamental computer science concept
//     ldr, modify, str

// ldr, str. The ARM processor is called a load/store archiecture
// all operations happen in register that are loaded from memory
// and then stored.

/*
int simulate(int n) {
    const int DAYS = 366;
    int cal[DAYS];

    // a static variable retains its value (and memory)
    // across function calls
    static int seedhack = 0;
    srand(time(NULL) + seedhack++);
    memset(cal, 0, DAYS*sizeof(int));

    // assign n birthdays
    int i = 0;
    while (i < n) {
        cal[rand() % DAYS]++;
        i++;
    }

    i = 0;
    while (i < DAYS) {
        if (cal[i] > 1)
            return 1;
        i++;
    }

    return 0;
}
*/

.global simulate
.cpu cortex-a53
.data // allocate global memory

// a word is the width, in bytes, of the natural size of the machine.
// 4 bytes
seedhack: .word 0

.text
simulate:
   push { r4-r8,lr } 
   mov r6, #366
   mov r5, r0

   // local variable get stored on the stack if you can't put them 
   // in a register
   sub sp, sp, r6, lsl #2  // shift r1 by two and then subtract
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
   mov r2, r6, lsl #2
   
   // Finish for HW :-)))))




