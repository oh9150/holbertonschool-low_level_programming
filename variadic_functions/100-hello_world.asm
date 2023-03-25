_start:
	mov rax,1
	mov rdi,1
	mov rsi,hello
	mov rdx,helloLen
	syscall

	mov rax,60
	mov rdi,0
	syscall

section .data
	hello: db "Hello, World", 0xA
	helloLen: equ $-hello
