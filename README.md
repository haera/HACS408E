# HACS408E: Reverse Engineering

**Couse Description**: _This course introduces students to the tools and
techniques required to analyze the security properties of various systems.
Topics covered include assembly language, executable file formats, operating
system internals, and the static/dynamic analysis of compiled binaries. Students
will apply these concepts to real-world scenarios like malware analysis and
vulnerability analysis with interactive labs, at-home assignments, and a final
project._

### Todo

- Make course website (syllabus with hugo hosted on github pages)
  - Each lecture has HTML slides created with [reveal.js](https://revealjs.com)
  - Each lecture has lecture notes
- Bootable USB sticks with locked-down Windows
- Cheat sheets for various tools

---

## Topics

| Week | Topic                  | Description                                                    | Lab                        |
| ---- | ---------------------- | -------------------------------------------------------------- | -------------------------- |
| 1    | C and assembly intro   | Basic overview of x86/x64 assembly, calling conventions, etc   | TBD                        |
| 2    | Static analysis        | Triage, binary formats, calling conventions, basic disassembly | TBD                        |
| 3    | Dynamic analysis       | GDB, binaryninja debugger                                      | binary bomb (like CMU one) |
| 4    | Ghidra                 | struct recovery, collaboration                                 | TBD                        |
| 5    | Vulnerability Analysis | Description                                                    | TBD                        |
| 6    | Cryptanalysis          | Description                                                    | TBD                        |
| 7    | Protocols              | Description                                                    | TBD                        |
| 8    | Malware                | Windows internals, basic malware                               | TBD                        |
| 9    | Rootkits               | Description                                                    | TBD                        |
| 10   | Firmware               | Description                                                    | TBD                        |
| 11   | Hardware               | Description                                                    | TBD                        |
| 12   | Mobile                 | Description                                                    | TBD                        |
| 13   | Final Project I        | Description                                                    | TBD                        |
| 14   | Final Project II       | Description                                                    | TBD                        |

**Miscellaneous topics**: fuzzing, implementing reverse engineering tools, symbolic execution, non-compiled code

---

## Labs

### Lab 1 - Assembly Language

Write a function in assembly to compute the GCD of two arguments passed in to
the function. Give a C harness to the students to use for testing with a blank
`.s` file to put their assembly code.

Requirements:

- C harness
- Makefile to properly build and link assembly code

### Lab X - Cryptography

Give them a crypt implementation and specification to compare. Break the crypto
in order to decrypt the communications.

Homework:

### Final Project

- Codebreaker challenges

## Policies

### Each Week

- Distribute slides
- Distribute lecture notes
- Distribute in-class lab, lab guides, and lab solutions
- Distribute list of 20 questions, quiz will be 5 of them
- Assign a short-ish homework lab

### Homework

- Due each week before class

### Grading

- Drop lowest homework

---

## Miscellaneous Ideas

- Reverse the [Feisti and TDL3](https://github.com/bootkitsbook/rootkits)
  rootkits from _Rootkits and Bootkits_ book
- Utilize Pwn Island 3? Potentially some performance issues.
- Malware from Practical Malware Analysis or Mastering Malware Analysis
- Trigger malware kill switch by registering domain
- Find some leaked cyberweapon to reverse engineer
- Analyze the backdoor in xz binaries?

---

## Tracking Content

Extra Lecture Ideas:

- Android Apk Analysis, Jadx
- Frida Dynamic Analysis Framework
- Intel Pin / Dynamorio DBI
- Fuzzing + AFL

|        Date | Week |           Section           | Module                                                    |            Lecture            | Labs |         Homework         |
| ----------: | ---: | :-------------------------: | :-------------------------------------------------------- | :---------------------------: | :--: | :----------------------: |
| 28 Aug 2024 |    1 |          C and Assembly     | Environment setup                                         |              [ ]              | [ ]  |           [ ]            |
|             |      |                             | C review (read encrypted file, xor decrypt flag)          |              [X]              | [ ]  |                          |
|             |      |                             | Incremental assembly assignments                          |              [ ]              |      |                          |
|             |      |                             | Homework: Re-implement C review in assembly               |                               |      |                          |
| 04 Sep 2024 |    2 |       Static Analysis       | Give them 4-5 binaries to traige strings, readelf         |              [ ]              | [ ]  |           [X]            |
|             |      |                             | Intro RE lab 1                                            |              [ ]              | [ ]  |                          |
|             |      |                             | Intro RE lab 2                                            |              [ ]              |      |                          |
|             |      |                             | Homework: CTF-style RE lab                                |              [ ]              |      |                          |
| 11 Sep 2024 |    3 |  Dynamic Analysis           | GDB walkthrough + GDB binary bomb                         |              [ ]              | [ ]  |           [ ]            |
|             |      |                             | GDB + UMD binary bomb                                     |              [ ]              | [ ]  |                          |
|             |      |                             | Binaryninja debugger + binary bomb                        |              [ ]              |      |                          |
|             |      |                             | Homework: Finish the binary bomb                          |              [ ]              |      |                          |
| 18 Sep 2024 |    4 |      Ghidra                 | Get familiar with the interface, basic RE lab             |              [ ]              | [ ]  |           [ ]            |
|             |      |                             | struct identification and reversing                       |              [ ]              | [ ]  |                          |
|             |      |                             | C++ lab (vtables, etc)                                    |              [ ]              |      |                          |
| 25 Sep 2024 |    5 |  Vulnerability Analysis     | basic strcpy buffer overflow, overwrite var on the stack  |              [ ]              | [ ]  |           [ ]            |
|             |      |                             | same lab except overwrite return address jmp shellcode    |              [ ]              | [ ]  |                          |
|             |      |                             | DEP and ASLR bypass                                       |              [ ]              |      |                          |
|             |      |                             | Homework: Exploit with DEP and ASLR bypass                |              [ ]              |      |                          |
| 02 Oct 2024 |    6 |         Cryptanalysis       | Write script that generates valid licenses to a checker   |              [ ]              | [ ]  |           [ ]            |
|             |      |                             | Toy heartbleed protocol                                   |              [ ]              | [ ]  |                          |
|             |      |                             | ???                                                       |              [ ]              |      |                          |
|             |      |                             | Homework: Reverse engineer weak key, brute force          |              [ ]              |      |                          |
| 09 Oct 2024 |    7 |           Networking        | Wireshark basics on pcap                                  |              [ ]              | [ ]  |           [ ]            |
|             |      |                             | Capture and RE a client/server key exchange               |              [ ]              | [ ]  |                          |
|             |      |                             | Implement masquerade client with session key              |              [ ]              |      |                          |
|             |      |                             | Homework: Give them C&C malware pcap                      |              [ ]              |      |                          |
| 16 Oct 2024 |    8 | Malware                     | Intro - What is a rootkit?                                |              [ ]              | [ ]  |           [ ]            |
|             |      |                             |                                                           |              [ ]              | [ ]  |                          |
|             |      |                             |                                                           |              [ ]              |      |                          |
| 23 Oct 2024 |    9 |          Firmware           | Intro - What is firmware? Embedded Systems...             |              [ ]              | [ ]  |           [ ]            |
|             |      |                             | `binwalk`, filesystems                                    |              [ ]              | [ ]  |                          |
|             |      |                             | QEMU + `chroot` Jail                                      |              [ ]              |      |                          |
| 30 Oct 2024 |   10 |          Hardware           | Intro - Fundamentals                                      |              [ ]              | [ ]  |          None?           |
|             |      |                             | JTAG + Read Flash Chips                                   |              [ ]              | [ ]  |                          |
|             |      |                             | ???                                                       |              [ ]              |      |                          |
| 06 Nov 2024 |   11 |                             |                                                           |              [ ]              | [ ]  |           [ ]            |
|             |      |                             |                                                           |              [ ]              | [ ]  |                          |
|             |      |                             |                                                           |              [ ]              |      |                          |
| 13 Nov 2024 |   12 |                             |                                                           |              [ ]              | [ ]  |           [ ]            |
|             |      |                             |                                                           |              [ ]              | [ ]  |                          |
|             |      |                             |                                                           |              [ ]              |      |                          |
| 20 Nov 2024 |   13 |                             |                                                           |              [ ]              | [ ]  |           [ ]            |
|             |      |                             |                                                           |              [ ]              | [ ]  |                          |
|             |      |                             |                                                           |              [ ]              |      |                          |
| 27 Nov 2024 |   14 |                             | No Class - Thanksgiving Break (Start Final Project?)      |                               |      |                          |
|             |      |                             |                                                           |                               |      | Extra Credit Assignment? |
|             |      |                             |                                                           |                               |      |                          |
| 04 Dec 2024 |   15 |                             | Final Project - ???                                       | [Work Period w/ Instructors?] |      |                          |
|             |      |                             |                                                           |              [ ]              |      |                          |
|             |      |                             |                                                           |              [ ]              |      |                          |
| 11 Dec 2024 |   16 |                             | No Class - Finals Week                                    |                               |      |                          |

---

# Week 1: Assembly Introduction

### Part 1: Introductions and Setup

- **Lecture**: Introductory remarks, syllabus, etc (15 Minutes?)
  - poll about programming experience?
- **Lab**: Environment setup (30 Minutes?)
  - [Setup Kali Linux VM](https://www.kali.org/docs/virtualization/install-vmware-silicon-host/)
  - Install BinaryNinja?

### Part 2

- **Lecture**: Assembly introduction (basic instructions, control flow
  (if/while/for), registers), Memory load/store (30 Minutes)
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
- **Lab**: Install assembler, compile + run hello world in assembly (30 Minutes)

### Part 3

- **Lecture**: Function (calling conventions, returning), How to call external
  functions, syscalls? (30 Minutes)
- **Lab**: call (30 Minutes)

### Homework

Implement a small assembly program (fizzbizz?).
