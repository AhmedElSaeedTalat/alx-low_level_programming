section .text
	global main
main:
	MOV rax, 0x1
   	MOV rdi, 0x1
	MOV rsi, msg
	MOV rdx, len
	SYSCALL

	MOV rax, 0x3c
	MOV rdi, 0x0
	SYSCALL

section .data
	msg: DB "Hello, Holberton", 0xA
	len: EQU $ - msg
