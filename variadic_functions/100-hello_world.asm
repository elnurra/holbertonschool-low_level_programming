section .data
    hello db 'Hello, World', 10  ; 10 is the ASCII code for newline

section .text
    global main

main:
    ; File descriptor: 1 (stdout)
    mov rdi, 1
    
    ; Buffer address (hello)
    mov rsi, hello
    
    ; Length of the string
    mov rdx, 13
    
    ; System call number for write: 1
    mov rax, 1
    
    ; Invoke the system call
    syscall
    
    ; Exit the program with exit code 0
    mov rax, 60         ; System call number for exit
    xor rdi, rdi        ; Exit code 0
    syscall

