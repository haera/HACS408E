---
title: "Lab 2: Assembly Language - Basics"
type: docs
weight: 2
---

{{< callout emoji="💡" >}}

**Explaination:**

This lab is meant to get you comfortable interacting with assembly language. You
will learn how to look up instructions and write assembly code.

<u>Goals:</u>

- Download and install tools needed to build/run assembly code.
- Lookup assembly instructions in a programmers manual.
- Do simple math in assembly.
- Understand control flow structures in assembly.

{{< /callout >}}

## Instructions

1. **Setup**:

   - First install an assembler. Either [`as`](https://www.nasm.us) or [`nasm`](https://www.nasm.us) will do.
     {{< callout type="info" >}}
     **NOTE:** The syntax for the program you write will change based on the assembler you use. Make sure to consult the documentation for the assembler to see which format (AT&T vs Intel) it uses.
     {{< /callout >}}

   - Create a blank assembly file called `main.s`. See [the example](#example) for a template.

1. **Simple Arithmetic**:

   - Store two `immediate` numbers of your choice in the general purpose registers `r8` and `r9`.

   - Search for the `add` and `imul` instructions in the x86 reference manual
     ([AMD](https://www.amd.com/content/dam/amd/en/documents/processor-tech-docs/programmer-references/24592.pdf),
     [Intel](https://cdrdv2.intel.com/v1/dl/getContent/671110))

   - Calculate the pythagorean theorem `A^2 + B^2 = C^2` using the numbers you put
     in `r8` and `r9`.

1. **Address and Memory**:

   - Check to see that the answer is correct by placing the result in `rsi` and running
     the program.

   - Search for the `shr` (shift right) and `and` instructions in the reference manual.

   - Print the address of the `fmt_str` variable in the template (provided
     below).
     - Print the value of the first byte of the string by `and`-ing it with
       the byte `0xff`.
     - Print the value of the eighth caracter in `fmt_str`. It is the
       [most significant byte](https://en.wikipedia.org/wiki/Endianness) so you
       will need to shift the byte down (using `shr`) before printing it out.
     - You can check your work by using `echo -e '\x##'` to print the hex value as a
       character. For example `echo -e '\x41'` prints the character `A`.

1. **Control Flow - Loops**:

   - Search for the `lea`, `jne`, and `cmp` instructions.

   - Calculate the length of `fmt_str` by incrementing a register by 1 until you reach the `NUL` byte.

## Example

{{< code source=/example-code/gas-template.s lang=GAS len=20 >}}

To compile, run: `$ as -o main.o gas-template.s`

{{< code source=/example-code/nasm-template.s lang=NASM len=20 >}}

To compile, run: `$ nasm -f elf64 -o main.o nasm-template.s`

### Test

```bash
# Compile your code (see above)
$ gcc -static -o main main.o
$ ./main
The value of $rsi is 0x########
```

## Tips

- Look at the documentation for your assembler if you're getting syntax errors!
- Don't be afraid to google things.

## Questions

{{< callout type="info" >}}

Submit a markdown file with any code you wrote and the answers to the following
questions to [ELMS](https://umd.instructure.com/courses/1374508/assignments)?

{{< /callout >}}

1. What are the `rip`, `rsp`, and `rbp` registers?

1. What does `xor %eax %eax` do?
