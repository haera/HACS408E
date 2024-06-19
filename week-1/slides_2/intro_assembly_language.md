### Introduction To Assembly Langauge Programming:

Date: TODO

---

### Learning Goals:

1. Develop a simple mental model of a computer.
<!-- ​.element: class="fragment" -->
1. Understand how to read/write assembly language syntax.​
<!-- ​.element: class="fragment" -->
1. Learn some X86 assembly language statements.
<!-- ​.element: class="fragment" -->

---

### Computer Architecture

---

### Main Components:​

* Central Processing Unit (CPU)​
  <!-- ​.element: class="fragment" -->
  * Registers​
    <!-- ​.element: class="fragment" -->
  * Arithmetic & Logic Unit (ALU)​
    <!-- ​.element: class="fragment" -->
* Main Memory (RAM)​
  <!-- ​.element: class="fragment" -->
* Input/Output Devices (Peripherals)​
  <!-- ​.element: class="fragment highlight-red" -->
* Data Bus (Lines in Graphic)​
  <!-- ​.element: class="fragment highlight-red" -->

---

<!-- .slide: data-background="#ffffff" -->
<img data-src=https://upload.wikimedia.org/wikipedia/commons/thumb/0/08/Computer_architecture_block_diagram.png/667px-Computer_architecture_block_diagram.png />

[Image Source](https://en.wikipedia.org/wiki/Computer_architecture)

---

### Central Processing Unit (CPU):

* Controls the flow of data to and from memory and I/O devices.
  <!-- ​.element: class="fragment" -->
* The CPU performs arithmetic and logical operations on the data. ​
  <!-- ​.element: class="fragment" -->
* The CPU can decide the order of operations based on the results
  of arithmetic and logic operations.
  <!-- ​.element: class="fragment" -->
* It contains a small amount of very fast memory (registers).
  <!-- ​.element: class="fragment" -->

[Intro to Computer Organization​](https://nostarch.com/introcomporg) by No Starch Press
<!-- .element: class="fragment" -->

---

### Random Access Memory (RAM)​:
<!-- .element: class="r-fit-text" -->

Provides storage that is readily accessible to the CPU and I/O devices for the
instructions to the CPU and the data they manipulate.​
<!-- ​.element: class="fragment" style="text-align: start" -->

### Input/Output Devices (Peripherals)​:
<!-- .element: class="r-fit-text" -->

Provides storage that is readily accessible to the CPU and I/O devices for the
instructions to the CPU and the data they manipulate.​
<!-- ​.element: class="fragment" style="text-align: start" -->

---

### Assembly Language Syntax

Intel vs. AT&T

([reference](https://imada.sdu.dk/u/kslarsen/dm546/Material/IntelnATT.htm))

---

### Prefixes:

In Intel syntax there are no register prefixes or `immed` prefixes. In AT&T
however registers are prefixed with a '%' and immed's are prefixed with a
'$'. Intel syntax hexadecimal or binary immed data are suffixed with 'h' and 'b'
respectively. Also if the first hexadecimal digit is a letter then the value is
prefixed by a '0'.

---

Intex Syntax

```nasm
mov     eax,1
mov     ebx,0ffh
int     80h
```

AT&T Syntax

```x86asmatt
movl    $1,%eax
movl    $0xff,%ebx
int     $0x80
```

---

### Direction of Operands:

The direction of the operands in Intel syntax is opposite from that of AT&T
syntax. In Intel syntax the first operand is the destination, and the second
operand is the source whereas in AT&T syntax the first operand is the source and
the second operand is the destination. The advantage of AT&T syntax in this
situation is obvious. We read from left to right, we write from left to right,
so this way is only natural.

---

Intex Syntax

```as
instr   dest,source
mov     eax,[ecx]
```

AT&T Syntax

```
instr   source,dest
movl    (%ecx),%eax
```

---

### Memory Operands:

Memory operands as seen above are different also. In Intel syntax the base
register is enclosed in '[' and ']' whereas in AT&T syntax it is enclosed in '('
and ')'.

---

Intex Syntax

```nasm
mov     eax,[ebx]
mov     eax,[ebx+3]
```

AT&T Syntax

```as
movl    (%ebx),%eax
movl    3(%ebx),%eax
```

---

### Suffixes.

As you may have noticed, the AT&T syntax mnemonics have a suffix. The
significance of this suffix is that of operand size. 'l' is for long, 'w' is for
word, and 'b' is for byte. Intel syntax has similar directives for use with
memory operands, i.e. byte ptr, word ptr, dword ptr. "dword" of course
corresponding to "long". This is similar to type casting in C but it doesnt seem
to be necessary since the size of registers used is the assumed datatype.


Intel Syntax

```nasm
mov     al,bl
mov     ax,bx
mov     eax,ebx
mov     eax, dword ptr [ebx]
```

AT&T Syntax

```as
movb    %bl,%al
movw    %bx,%ax
movl    %ebx,%eax
movl    (%ebx),%eax
```

---

### Lab Manual:

* [GNU `as` i386/x64 Manual](https://sourceware.org/binutils/docs/as/i386_002dDependent.html)
* https://cs.lmu.edu/~ray/notes/gasexamples/
* https://armasm.com/docs/getting-to-hello-world/basics/
