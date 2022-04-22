.global swap
.text

swap:
    // addresses of doubles are in r0 and r1
    vldr.f64 d0, [r0]  // d0 = *x
    vldr.f64 d1, [r1]  // d1 = *y
    vstr.f64 d1, [r0]  // *x = d1
    vstr.f64 d0, [r1]  // *y = d0
    bx lr
