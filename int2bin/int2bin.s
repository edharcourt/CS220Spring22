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
	.file	"int2bin.c"
	.text
	.align	2
	.global	int2bin
	.arch armv6
	.syntax unified
	.arm
	.fpu vfp
	.type	int2bin, %function
int2bin:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	subs	r4, r0, #0
	bne	.L2
	mov	r0, #48
	pop	{r4, lr}
	b	putchar
.L2:
	asr	r0, r4, #1
	bl	int2bin
	and	r1, r4, #1
	ldr	r0, .L5
	pop	{r4, lr}
	b	printf
.L6:
	.align	2
.L5:
	.word	.LC0
	.size	int2bin, .-int2bin
	.section	.rodata.str1.4,"aMS",%progbits,1
	.align	2
.LC0:
	.ascii	"%d\000"
	.ident	"GCC: (Raspbian 8.3.0-6+rpi1) 8.3.0"
	.section	.note.GNU-stack,"",%progbits
