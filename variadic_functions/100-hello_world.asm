section .data
    msg db "Hello, World!", 0Dh, 0Ah, '$' ; '$' terminates the string

section .text
    org 100h ; origin, this is a COM file

start:
    mov dx, msg  ; load offset of msg into dx.
    mov ah, 09h  ; print function is 9.
    int 21h      ; do it!

    mov ah, 4Ch  ; exit function is 4Ch.
    int 21h      ; do it!

