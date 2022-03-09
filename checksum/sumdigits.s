	.arch armv6
	.eabi_attribute 28, 1
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 2
	.eabi_attribute 34, 1
	.eabi_attribute 18, 4
	.file	"sumdigits.c"
	.text
	.align	2
	.global	checksum
	.arch armv6
	.syntax unified
	.arm
	.fpu vfp
	.type	checksum, %function
checksum:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	cmp	r0, #0
	ble	.L4
	ldr	ip, .L7
	mov	r1, #0
.L3:
	umull	r2, r3, ip, r0
	cmp	r0, #9
	lsr	r3, r3, #3
	add	r2, r3, r3, lsl #2
	sub	r2, r0, r2, lsl #1
	add	r1, r1, r2
	mov	r0, r3
	bgt	.L3
	umull	r3, r0, ip, r1
	lsr	r0, r0, #3
	add	r0, r0, r0, lsl #2
	sub	r0, r1, r0, lsl #1
	bx	lr
.L4:
	mov	r0, #0
	bx	lr
.L8:
	.align	2
.L7:
	.word	-858993459
	.size	checksum, .-checksum
	.ident	"GCC: (Raspbian 8.3.0-6+rpi1) 8.3.0"
	.section	.note.GNU-stack,"",%progbits
