global main
extern printf

main:
    ; call printf with hello and format string
    mov edi, format
    xor eax, eax
    call printf

    ; exit program with status code 0
    mov eax, 0
    ret
format: db `Hello, Holberton\n`, 0
