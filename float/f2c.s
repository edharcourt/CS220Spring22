/*
double f2c(double f) {
    return 5.0/9.0 * (f - 32);
}
*/
.global f2c
.fpu vfp   // vector floating-point unit
.cpu cortex-a53

.data
.align 3  // align values on an 8 byte boundary.  pow(2,3) = 8
five: .double 5.0
nine: .double 9.0
thirtytwo: .double 32.0

.text
.align 2   // instructions need to aligned on a four byte boundary

f2c:
    ldr r0, =five  // put addres of where 5.0 is in r0
    vldr.f64 d1, [r0] 
    ldr r0, =nine   // put addres of where 9.0 is in r0
    vldr.f64 d2, [r0] 

    vdiv.f64 d1, d1, d2

    ldr r0, =thirtytwo
    vldr.f64 d2, [r0]

    vsub.f64 d0, d0, d2   // f - 32
    vmul.f64 d0, d1, d0
    bx lr

