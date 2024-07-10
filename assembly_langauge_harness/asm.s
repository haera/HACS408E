;; fizzbuzz

section .text
global fizzbuzz

fizzbuzz:
        mov x, %rax
        mov y, %rbx
        add %rax, %rax, %rbx

section .data
x dw $3
y dw $5
