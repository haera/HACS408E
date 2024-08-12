.text
.extern printf
.global main

main:
    # START: your code

    # END: your code

    movq $fmt_str, %rdi
    xor %al, %al
    call printf
    ret $0

.data
fmt_str:
    .ascii "The value of $rsi is 0x%zX"
    .byte 10,0
