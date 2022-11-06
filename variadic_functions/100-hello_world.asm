section .text
global main

main:
        mov rdx, msglen
        mov rsi, msg
        mov rax, 1
        mov rdi, 1
        syscall

        mov rax, 60
        syscall

section .data
	msg: db "Hello, World", 10
	msglen: equ $ - msg



