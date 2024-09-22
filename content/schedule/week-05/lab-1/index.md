---
title: "Lab 1: Buffer Overflows"
type: docs
weight: 1
---

## Overview

{{< callout emoji="💡" >}}

In this lab you will exploit some basic buffer overflows. You will need to
analyze the software to find the vulnerability in order to understand how to
solve the challenge.

**Goals:**

- Practice using ghidra to analyze software.
- Practice using gdb to interact with software dynamically.
- Understand endianness
- Exploit a buffer overflow

**Estimated Time:** `60 Minutes`

{{< /callout >}}

## Instructions

{{% steps %}}

### Download Challenge Binaries

{{< downloadbutton file="challenge_1.bin" text="challenge_1" >}}

{{< downloadbutton file="challenge_2.bin" text="challenge_2" >}}

{{< downloadbutton file="challenge_3.bin" text="challenge_3" >}}

### The `checksec` Program

Run the `checksec` program on each of the individual binaries, for example:
`checksec --file=challenge_1.bin`. (You may have to install `checksec`).

1. Explain what the sections `STACK CANARY`, `NX`, and `PIE` mean.

1. Which of the above protections do each of the binaries have enabled.

### Solve the challenges

Open the binaries in ghidra to understand how they work. Save the inputs that
you used to solve the challenges to individual files and submit a text file with
a hex dump of each of your inputs.

`cat <input_file> | xxd >> submission.txt`

{{% /steps %}}

## Tips

- Build up your input slowly to see where it getting to on the stack.
- To see more of the stack in `gef`, run `gef config context.nb_lines_stack 20`.
- If you want to use the contents of a file as your input in `gdb` you can run
  the program with: `run < my_input_file`.

## Submission

{{< callout emoji="📝" >}}

Submit a markdown file with any code you wrote and the answers to questions to
[ELMS](https://umd.instructure.com/courses/1374508/assignments)?

{{< /callout >}}
