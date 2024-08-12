extern printf
section .text

global main

main:
    ; START: your code

    ; END: your code

    mov rdi, $fmt_str
    xor al, al
    call printf
    ret 0

section .data

fmt_str:
    db  "The value of $rsi is 0x%zX",10,0
