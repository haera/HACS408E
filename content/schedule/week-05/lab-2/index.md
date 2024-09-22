---
title: "Lab 2: Format String Vulnerabilities"
type: docs
weight: 2
---

## Overview

{{< callout emoji="💡" >}}

In this lab you will learn to exploit a new type of vulnerability where an
attacker controls the contents of a format string.

**Goals:**

- Understand format string vulnerabilities
- Practice using `gdb` and `Ghidra`

**Estimated Time:** `60 Minutes`

{{< /callout >}}

## Instructions

{{% steps %}}

### Understand how `printf` works:

Review the [SEED Labs Format String Slides](Format_String_Slides.pdf) or use
google to learn how the `printf` function prints a variable number of arguments.

1. Explain in plain language how the `printf` function works.
1. Where are the arguments stored?

### Download the challenge binary:

{{< downloadbutton file="fmt_str_vuln.bin" text="Format String Binary" >}}

### Follow the SEED Lab Guide

{{< downloadbutton
file="https://seedsecuritylabs.org/Labs_20.04/Files/Format_String/Format_String.pdf"
text="Format String Lab Guide" >}}

This lab is based on SEED Labs'
[Format String Lab Guide](https://seedsecuritylabs.org/Labs_20.04/Files/Format_String/Format_String.pdf).
Ignore the beginning part of the document about lab setup and skip straight to
`section 3` to start working on tasks. Apply each task to the binary you
downloaded in [step 2](#step2). Ignore anything about a remote server, this
binary reads from `stdin` and everything will be done locally.

#### <u>Task 1: Crashing the Program</u>

Use the string
[`conversion specifier`](https://en.cppreference.com/w/cpp/io/c/fprintf) to
dereference a bunch of strings on the stack until you crash the program.

#### <u>Task 2: Printing Out the Vulnerable Program's Memory</u>

This one is fairly self explainatory. `%x` or `%p` will be helpful.

#### <u>Task 3: Modifying the Vulnerable Program’s Memory</u>

1. Explain what the `%n` format specifier does.

Follow the lab guide instructions to modify the programs memory.

{{% /steps %}}

## Tips

- The `Format String Slides` may be helpful.

## Submission

{{< callout emoji="📝" >}}

Submit a markdown file with any code you wrote and the answers to questions to
[ELMS](https://umd.instructure.com/courses/1374508/assignments).

{{< /callout >}}
