.text
.extern printf
.global main

main:
    # START: your code

    # Part 1: Pythagorean Theorem - 3^2 + 5^2
    movq $3, %r8
    movq $5, %r9
    imul %r8, %r8
    imul %r9, %r9
    add %r8, %r9
    movq %r9, %rsi

    # Part 2: String address
    movq $fmt_str, %rsi
    xor %rcx, %rcx

    mov (fmt_str), %rsi
    shr $56, %rsi
    mov (fmt_str), %rsi
    and $0xff, %rsi

    # Part 3: strlen()
    xor %rbx, %rbx  # Pointer
    xor %rcx, %rcx  # Current char
    xor %rdx, %rdx  # Counter
    mov $fmt_str, %rbx
loop:
    movb (%rbx), %cl
    add $1, %rbx
    add $1, %rdx
    cmpb $0, %cl
    jne loop
    mov %rdx, %rsi

    # END: your code

    movq $fmt_str, %rdi
    xor %al, %al
    call printf
    ret $0

.data
fmt_str:
    .ascii "The value of $rsi is 0x%zX"
    .byte 10,0

# Solution:
# as -o main.o lab-1_solution.s
# gcc -static -o main main.o
# ./main
