# Week 1: Assembly Introduction

### Part 1: Introductions and Setup

- **Lecture**: Introductory remarks, syllabus, etc
  (15 Minutes?)
  - poll about programming experience?
- **Lab**: Environment setup
  (30 Minutes?)
  - [Setup Kali Linux VM](https://www.kali.org/docs/virtualization/install-vmware-silicon-host/)
  - Install BinaryNinja?

### Part 2

- **Lecture**: Assembly introduction (basic instructions, control flow (if/while/for), registers), Memory load/store
  (30 Minutes)
  ```c
  int foo(int x) {
      int y = 0;
      while (x > 0) {
          y = y + x;
          x--;
      }
      return y;
  }
  ```
  In godbolt w/ `-O1`
  ```assembly
  foo(int):
          test    edi, edi
          jle     .L4
          mov     eax, 0
  .L3:
          add     eax, edi
          sub     edi, 1
          jne     .L3
          ret
  .L4:
          mov     eax, 0
          ret
  ```
- **Lab**: Install assembler, compile + run hello world in assembly
  (30 Minutes)

### Part 3

- **Lecture**: Function (calling conventions, returning), How to call external functions, syscalls?
  (30 Minutes)
- **Lab**: call
  (30 Minutes)

### Homework

Implement a small assembly program (fizzbizz?).
