section .data
    hello db "Hello, Holberton",10 ; The string to print with newline
    hello_len equ $ - hello       ; Length of the string

section .text
    global main

    extern printf

main:
    sub rsp, 8                    ; Align the stack

    lea rdi, [rel hello]          ; Load the address of the format string
    call printf                   ; Call printf

    add rsp, 8                    ; Restore the stack
    ret                           ; Exit

