extern printf
section .data
    hello db 'Hello, Holberton', 0
    format db '%s\n', 0

section .text
    global main

main:
    ; call printf with hello and format string
    mov rdi, format
    mov rsi, hello
    xor rax, rax
    call printf

    ; exit program with status code 0
    xor rdi, rdi
    mov rax, 60
    syscall
