.section   .data
.LC0:
	.string "hello,akaedu\n"
	.text
.globl _start
_start:
#write(1, "hello", 10);
	movl $4,	%eax	# write(?)
	movl $1,	%ebx	# write(1, )
	movl $.LC0,		%ecx	#write(1, "hello", ) 
	movl $13,	%edx	#write(1, "hello", 11)	
	int  $0x80

#exit
	movl	$1, %eax	#exit(?)
	movl	$0, %ebx 	#exit(0)
	int		$0x80

#如果不返回则出现段错误
#exit
#	movl	$1, %eax	#exit(?)
#	movl	$0, %ebx 	#exit(0)
#	int		$0x80
