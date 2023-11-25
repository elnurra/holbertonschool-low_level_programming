section .data
    hello_msg db 'Hello, World', 0xA ; Message to be printed (0xA is the newline character)

section .text
    global _start

_start:
    ; File descriptor for stdout (1)
    mov rdi, 1
    
    ; Message length
    mov rdx, 13 ; Length of 'Hello, World' plus the newline character
    
    ; Pointer to the message
    mov rsi, hello_msg
    
    ; System call number for write (1)
    mov rax, 1
    
    ; Make system call
    syscall
    
    ; Exit the program (syscall number 60 for exit)
    mov rax, 60
    xor rdi, rdi ; Exit code 0
    syscall

