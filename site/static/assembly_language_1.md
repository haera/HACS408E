<h2 class="r-fit-text">HACS408E:</h2>
<h3 class="r-fit-text">
  <span class="fragment" style="white-space: nowrap;">Week 1</span>
  <span class="fragment" style="white-space: nowrap;">- Part 2</span>
</h3>

---

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

### Main Components:

<!-- NOTE: Fall back to HTML here for fragment.-->
<ul>
  <li class="fragment" data-fragment-index="0">Central Processing Unit</li>
  <ul>
    <li class="fragment" data-fragment-index="1">Registers (Fast Memory)</li>
    <li class="fragment" data-fragment-index="2">Arithmetic & Logic Unit (ALU)</li>
  </ul>
  <li class="fragment" data-fragment-index="3">Main Memory (RAM)</li>
  <span class="fragment strike semi-fade-out" data-fragment-index="6">
  <li class="fragment" data-fragment-index="4">Input/Output Devices (Peripherals)</li>
  <li class="fragment" data-fragment-index="5">Data Bus</li>
  </span>
</ul>

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

---

### Random Access Memory (RAM)​:
<!-- .element: class="r-fit-text" -->

Provides storage that is readily accessible to the CPU and I/O devices.​
<!-- ​.element: class="fragment" style="text-align: start" -->

### Input/Output Devices (Peripherals)​:
<!-- .element: class="r-fit-text" -->

Communicates with the outside world and with mass storage devices.
<!-- ​.element: class="fragment" style="text-align: start" -->

---

<img data-src='/images/amd64_register_set.png' />

---

<img data-src='https://patshaughnessy.net/assets/2016/11/26/register.png' width=800px />
---

## Assembly Language Syntax

---

<div>

C Code:
<!-- .element: style="text-align: start" -->

```c
int hacs408e() {
    return 408;
}
```

</div>
<!-- .element: class="fragment" -->

<table style="min-width: var(--slide-width)" class="fragment">
<thead>
<tr>
<th>Intel</th>
<th>AT&T</th>
</tr>
</thead>
<tr>
<td>

```x86asm [1:]
hacs408e():
        mov     eax, 408
        ret
```

</td>
<td>

```x86asmatt [1:]
hacs408e():
        movl    $408, %eax
        ret
```

</td>
</tr>
<table>

---

### Prefixes:

* AT&T:
  <!--​.element: class="fragment" -->
  * Registers are prefixed with '%'
    <!--​.element: class="fragment" -->
  * Numbers are prefixed with a '$'
    <!--​.element: class="fragment" -->
  * Intel does not use prefixes
    <!--​.element: class="fragment" -->
* Intel:
  <!--​.element: class="fragment" -->
  * Hexadecimal data is suffixed with 'h'
    <!--​.element: class="fragment" -->
  * Binary values are suffixed with 'b'
    <!--​.element: class="fragment" -->
  * AT&T does not use suffixes
    <!--​.element: class="fragment" -->

---

<table style="min-width: var(--slide-width)">
<thead>
<tr>
<th>Intel</th>
<th>AT&T</th>
</tr>
</thead>
<tr>
<td>

```x86asm [1:]
mov     eax,1
mov     ebx,0ffh
int     80h
```

</td>
<td>

```x86asmatt [1:]
movl    $1,%eax
movl    $0xff,%ebx
int     $0x80
```

</td>
</tr>
<table>

---

### Direction of Operands:

<table style="min-width: var(--slide-width)">
<thead>
<tr>
<th>Intel</th>
<th>AT&T</th>
</tr>
</thead>
<tr>
<td>

```x86asm
dest <-- source
```
* Left most operand
<!--​.element: class="fragment" -->

</td>
<td>

```x86asmatt
source --> dest
```
* Right most operand
<!--​.element: class="fragment" -->

</td>
</tr>
<table>

---

<table style="min-width: var(--slide-width)">
<thead>
<tr>
<th>Intel</th>
<th>AT&T</th>
</tr>
</thead>
<tbody>
<tr>
<td>

```x86asm [1:]
; instr   dest,source
  mov     eax ,ecx
```

</td>
<td>

```x86asmatt [1:]
# instr   source,dest
  movl    %ecx,%eax
```

</td>
</tr>
</tbody>
<table>

---

### Memory Operands:

* In Intel syntax the base register is enclosed in '[' and ']'
  <!--​.element: class="fragment" -->
* AT&T syntax it is enclosed in '(' and ')'.
  <!--​.element: class="fragment" -->

---

<table style="min-width: var(--slide-width)">
<thead>
<tr>
<th>Intel</th>
<th>AT&T</th>
</tr>
</thead>
<tbody>
<tr>
<td>

```x86asm [1:]
mov     eax,[ebx]
mov     eax,[ebx+3]
```
</td>
<td>

```x86asmatt [1:]
movl    (%ebx),%eax
movl    3(%ebx),%eax
```

</td>
</tr>
</tbody>
<table>

---

### Suffixes:

* Some AT&T instructions have a suffix
  <!--​.element: class="fragment" -->
* They are used to denote operand size
  <!--​.element: class="fragment" -->
  * 'l' is for long (4 bytes)
    <!--​.element: class="fragment" -->
  * 'w' is for word (2 bytes)
    <!--​.element: class="fragment" -->
  * 'b' is for byte (1 byte)
    <!--​.element: class="fragment" -->
* Intel only uses these labels for memory operands
  <!--​.element: class="fragment" -->
  * 'dword ptr' for long
    <!--​.element: class="fragment" -->
  * 'word ptr' for word
    <!--​.element: class="fragment" -->
  * 'byte ptr' for byte
    <!--​.element: class="fragment" -->

---

<table style="min-width: var(--slide-width)">
<thead>
<tr>
<th>Intel</th>
<th>AT&T</th>
</tr>
</thead>
<tbody>
<tr>
<td>

```x86asm [1:]
mov     al,bl
mov     ax,bx
mov     eax,ebx
mov     eax, dword ptr [ebx]
```

</td>
<td>

```x86asmatt [1:]
movb    %bl,%al
movw    %bx,%ax
movl    %ebx,%eax
movl    (%ebx),%eax
```

</td>
</tr>
</tbody>
<table>

---

### References

* [Intro to Computer Organization](https://nostarch.com/introcomporg) by No Starch Press
* [Intel vs. AT&T](https://imada.sdu.dk/u/kslarsen/dm546/Material/IntelnATT.htm)
* [Learn X86 Assembly](https://patshaughnessy.net/2016/11/26/learning-to-read-x86-assembly-language)
* [GNU `as` i386/x64 Manual](https://sourceware.org/binutils/docs/as/i386_002dDependent.html)
* [GNU Assembler Examples](https://cs.lmu.edu/~ray/notes/gasexamples/)
* https://armasm.com/docs/getting-to-hello-world/basics/
* Amd64 Programmers Manual
