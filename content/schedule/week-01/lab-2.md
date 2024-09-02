---
title: "Lab 2: Assembly Language - Basics"
type: docs
weight: 2
---

## Overview

{{< callout emoji="💡" >}}

This lab is meant to get you comfortable interacting with assembly language. You
will learn how to look up instructions and write assembly code.

**Goals:**

- Download and install tools needed to build/run assembly code.
- Lookup assembly instructions in a programmers manual.
- Do simple math in assembly.
- Understand control flow structures in assembly.

{{< /callout >}}

## Instructions

{{% steps %}}

### Setup

- First install an assembler. Either [`as`](https://www.nasm.us) or
  [`nasm`](https://www.nasm.us) will do. {{< callout type="info" >}} **NOTE:**
  The syntax for the program you write will change based on the assembler you
  use. Make sure to consult the documentation for the assembler to see which
  format (AT&T vs Intel) it uses. {{< /callout >}}

- Download a template file to start writing assembly code:

  {{< downloadbutton file=../gas-template.s text="GAS" >}}

  {{< downloadbutton file=../nasm-template.s text="NASM" >}}

### Simple Arithmetic

- Store two `immediate` numbers of your choice in the general purpose registers
  `r8` and `r9`.

- Search for the `add` and `imul` instructions in the x86 reference manual
  ([AMD](https://www.amd.com/content/dam/amd/en/documents/processor-tech-docs/programmer-references/24592.pdf),
  [Intel](https://cdrdv2.intel.com/v1/dl/getContent/671110))

- Calculate the sum of two squares (`A^2 + B^2`) using the numbers you put in
  `r8` and `r9`.

- Check to see that the answer is correct by placing the result in `rsi` and
  running the program.

### Addresses and Memory

- Search for the `shr` (shift right) and `and` instructions in the reference
  manual.

- Print the address of the `fmt_str` variable.

- Print the value of the first byte of the string

  1. Load the first chunk of the string into a register.
  2. Get the first byte by `and`-ing the register with the byte `0xff`.

- Print the value of the first lowercase `'a'` caracter in `fmt_str`.

  - You can check your work by using `echo -e '\x##'` to print the hex value as
    a character. For example `echo -e '\x41'` prints the character `A`.
  - Alternatively use `man ascii` to find the hex value of `'a'`.

## Control Flow - Loops

- Search for the `jne`, and `cmp` instructions.

- Calculate the length of `fmt_str` by incrementing a register by 1 until you
  reach the `NUL` byte.

- Your answer should print the hex value for `27`.

{{% /steps %}}

## Testing

### GNU Assembler

To compile, run:

```{filename=Bash}
$ as -o main.o gas-template.s
$ gcc -static -o main main.o
$ ./main
```

### Netwide Assembler

To compile, run:

```{filename=Bash}
$ nasm -f elf64 -o main.o nasm-template.s
$ gcc -static -o main main.o
$ ./main
```

## Tips

- Look at the documentation for your assembler if you're getting syntax errors!
- Don't be afraid to google things.

## Submission

{{% callout emoji="📝" %}}

Submit a markdown file with any code you wrote and the answers to the following
questions to [ELMS](https://umd.instructure.com/courses/1374508/assignments).

{{< /callout >}}

1. What are the `rip`, `rsp`, and `rbp` registers?

1. What does `xor %eax %eax` do?
