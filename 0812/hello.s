.globl _star

_star:
	movl $1, %eax
	movl $255, %ebx
	int $0x80
