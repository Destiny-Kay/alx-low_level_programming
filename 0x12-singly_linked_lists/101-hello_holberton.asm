section .data
    hello db 'Hello, Holberton', 0

section .text
    extern printf

    global _start
_start:
    sub esp, 4
    push hello
    call printf 
    add esp, 8 

    mov eax, 1 
    xor ebx, ebx 
    int 0x80
