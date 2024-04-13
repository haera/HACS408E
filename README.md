# HACS408E: Reverse Engineering

**Couse Description**: *This course introduces students to the tools and techniques required to analyze the security properties of various systems. Topics covered include assembly language, executable file formats, operating system internals, and the static/dynamic analysis of compiled binaries. Students will apply these concepts to real-world scenarios like malware analysis and vulnerability analysis with interactive labs, at-home assignments, and a final project.*

### Todo

- Make course website (syllabus with hugo hosted on github pages)
  - Each lecture has HTML slides created with [reveal.js](https://revealjs.com)
  - Each lecture has lecture notes
- Bootable USB sticks with locked-down Windows
- Cheat sheets for various tools

---

### Requried Texts

- TBD. Likely none.

### System Requirements

- Most labs and exercises are assumed to be done on unix like systems.
- Maybe windows vm required?
- Newer Macbooks will be running on arm... Should we make arm versions of the
  assembly lab + homework?

### Reference Texts

- **General**: [Practical Reverse Engineering](https://www.amazon.com/Practical-Reverse-Engineering-Reversing-Obfuscation/dp/1118787315), [Secrets of Reverse Engineering](https://www.amazon.com/Reversing-Secrets-Engineering-Eldad-Eilam/dp/0764574817/), [x86 Software Reverse Engineering](https://www.amazon.com/dp/1394199880/)
- **Malware Analysis**: [Practical Malware Analysis](https://www.amazon.com/Practical-Malware-Analysis-Hands-Dissecting/dp/1593272901/), [Mastering Malware Analysis](https://www.amazon.com/Mastering-Malware-Analysis-practical-cybercrime)
- **Firmware**: [Rootkits and Bootkits](https://www.amazon.com/Rootkits-Bootkits-Reversing-Malware-Generation/dp/1593277164)
- **Exploitation**: [Hacking: The Art of Exploitation](https://www.amazon.com/Hacking-Art-Exploitation-Jon-Erickson/dp/1593271441/), [Shellcoders Handbook](https://www.amazon.com/Shellcoders-Handbook-Discovering-Exploiting-Security/dp/047008023X)
- **Windows**: [Windows Internals 1](https://www.amazon.com/Windows-Internals-Part-architecture-management/dp/0735684189/), [Windows Internals 2](https://www.amazon.com/Windows-Internals-Part-2-7th/dp/0135462401/), [Rootkit Arsenal](https://www.amazon.com/Rootkit-Arsenal-Escape-Evasion-Corners/dp/144962636X/)
- **Cryptography**: [Serious Cryptography](https://www.amazon.com/Serious-Cryptography-Practical-Introduction-Encryption/dp/1593278268), [Real-World Cryptography](https://www.amazon.com/dp/1617296716/)
- **Protocols**: [Attacking Network Protocols](https://www.amazon.com/Attacking-Network-Protocols-Analysis-Exploitation/dp/1593277504/)
- **Binary Analysis**: [Practical Binary Analysis](https://www.amazon.com/Practical-Binary-Analysis-Instrumentation-Disassembly/dp/1593279124/)
- **IOT**: [Practical IOT Hacking](https://nostarch.com/practical-iot-hacking), [The IoT Hacker’s Handbook](https://link.springer.com/book/10.1007/978-1-4842-4300-8)
- **Hardware**: [Hardware Hacker's Handbook](https://nostarch.com/hardwarehacking)
- **Miscellaneous**: [Introduction to Cyber-Warfare](https://www.amazon.com/Introduction-Cyber-Warfare-Multidisciplinary-Paulo-Shakarian/dp/0124078141), [The Ghidra Book](https://www.amazon.com/Ghidra-Book-Definitive-Guide/dp/1718501021)

### Other Resources
- [MalDev academy](https://maldevacademy.com/)
- [Vx underground malware code](https://github.com/vxunderground/MalwareSourceCode)
- [pwn.college](https://pwn.college/program-security/reverse-engineering)
- [Compiler Explorer](https://godbolt.org/) | [Decompiler Explorer](https://dogbolt.org)

---

## Topics

| Week | Topic | Description | Lab |
| --- | --- | --- | --- |
| 1 | Assembly introduction | Basic overview of x86/x64 assembly, calling conventions, etc | TBD |
| 2 | Static analysis I | Triage, binary formats, calling conventions, basic disassembly | TBD |
| 3 | Static analysis II | Description | TBD |
| 4 | Dynamic analysis | GDB, binaryninja debugger | binary bomb (like CMU one) |
| 5 | Ghidra | struct recovery, collaboration | TBD |
| 6 | Vulnerability Analysis I | Description | TBD |
| 7 | Vulnerability Analysis II | Description | TBD |
| 8 | Protocols | Description | TBD |
| 9 | Malware I | Windows internals, basic malware | TBD |
| 10 | Malware II | Description | TBD |
| 11 | Rootkits | Description | TBD |
| 12 | Firmware | Description | TBD |
| 13 | Hardware | Description | TBD |
| 14 | Final Project I | Description | TBD |
| 15 | Final Project II | Description | TBD |

**Miscellaneous topics**: Cryptanalysis, implementing reverse engineering tools, symbolic execution, non-compiled code, IOT devices

---

## Labs

### Lab 1 - Assembly Language

Write a function in assembly to compute the GCD of two arguments passed in
to the function. Give a C harness to the students to use for testing with a
blank `.s` file to put their assembly code.

Requirements:
 - C harness
 - Makefile to properly build and link assembly code

### Lab X - Cryptography

Give them a crypt implementation and specification to compare. Break the crypto in order to decrypt the communications.

Homework:

### Final Project

- Codebreaker challenges

## Policies

### Homework

- Due each week before class

### Grading

- Drop lowest homework

---

## Miscellaneous Ideas

- Reverse the [Feisti and TDL3](https://github.com/bootkitsbook/rootkits) rootkits from *Rootkits and Bootkits* book
- Utilize Pwn Island 3? Potentially some performance issues.
- Malware from Practical Malware Analysis or Mastering Malware Analysis
- Trigger malware kill switch by registering domain
- Find some leaked cyberweapon to reverse engineer
- Analyze the backdoor in xz binaries?
