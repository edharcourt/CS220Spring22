
.global inorder

.text

// r0 < r1 < r2
inorder:
    cmp r0, r1
    bge returnfalse
    cmp r1,r2
    bge returnfalse
    mov r0, #1 
    bx lr
returnfalse:
    mov r0, #0
    bx lr
