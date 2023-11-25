section .data
    hello db 'Hello, World', 0xA
    hello_len equ $ - hello

section .text
    global _start

_start:
    ; write hello message
    mov eax, 1
    mov edi, 1
    mov esi, hello
    mov edx, hello_len
    syscall

    ; exit program
    mov eax, 60
    xor edi, edi
    syscall
