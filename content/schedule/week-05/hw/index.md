---
title: "HW: Shellcode"
type: docs
weight: 4
---

Follow the below specefied tasks in
[SEED Security Labs' Shellcode Lab](https://seedsecuritylabs.org/Labs_20.04/Files/Shellcode/Shellcode.pdf).
Ignore any mention of `arm` shellcode. You will be writing x86_64 assembly code
that will execute on your Kali Linux VM.

- **Task 1:** Writing Assembly Code
- **Task 2:** Writing Shellcode | NOTE: you only need to complete sub-tasks up
  to an including `task 2.b`
  - **Task 2.a.** Understand the code
  - **Task 2.b.** Eliminate zeros from the code

You may find the lectures on [Buffer Overflows](Buffer_Overflow_Slides.pdf) and
[Shellcode](Shellcode_Slides.pdf) helpful as well.

Once you have some shellcode written try exploiting the buffer overflow in
[challenge_3.bin](../lab-1/challenge_3.bin). You will need to write your
shellcode on to the stack and then overwrite the return address correctly so the
program counter points to your shellcode when the vulnerable function returns.

- Success is not determined by whether or not your exploit works. Debug it with
  `gdb` and explain what went write or wrong.

## Submission

{{< callout emoji="📝" >}}

Submit a markdown (`.md`) or PDF (`.pdf`) file containing a lab report to
describe what you have done and what you observed. You also need to provide
explanation to the observations that are interesting or surprising. Please also
list the important code snippets followed by explanation.

Submit the report to
[ELMS](https://umd.instructure.com/courses/1374508/assignments).

{{< /callout >}}
