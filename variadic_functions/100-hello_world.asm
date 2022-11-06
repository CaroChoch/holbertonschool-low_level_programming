section .text
global main

main:
        mov rdx, msglen; sizeof the string
        mov rsi, msg; string
        mov rax, 1; write
        mov rdi, 1; stout
        syscall

        mov rax, 60; exit
	mov rdi, 0; exit success 
	syscall

section .data
	msg: db "Hello, World", 10
	msglen: equ $ - msg



