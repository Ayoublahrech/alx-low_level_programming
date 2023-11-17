global    _main
extern    printf

section .text

_main:
    mov     rax, 1       ; syscall number for printf
    mov     rdi, msg     ; address of the message
    mov     rsi, 0       ; no additional arguments
    syscall                ; call the printf function

    mov     rax, 60      ; syscall number for exit
    mov     rdi, 0       ; exit status
    syscall                ; call the exit function

msg:    db      "Hello, Holberton\n", 0
