---
title: "Lab 1: Todo"
type: docs
weight: 1
---

{{< callout emoji="💡" >}}

**Explaination:**

In this lab you will use `strace` and `ltrace` to analyze a mystery program.
You will also use `LD_PRELOAD` to exploit features of dynamically linked programs.

<u>Goals:</u>

- Become familiar with how a program interacts with the linux operating system.
- Practice using well know dynamic analysis tools.
- Understand how a program is loaded/executed.

{{< /callout >}}

## Instructions

{{% steps %}}

### Download Mystery File

{{< downloadbutton file="file" text="Executable" >}}

### `strace`

TODO

#### Questions

1. What does the `openat`, and `execve`, syscalls do? Cite your sources.

1. What files does the mystery program try to open? Does this give 
   you any insight into what the program does?

### `ltrace`

TODO

#### Questions

1. TODO

### `LD_PRELOAD`

#### Questions

1. TODO

{{% /steps %}}

## Tips

- TODO

## Submission

{{< callout type="info" >}}

Submit a markdown file with a write up and answers to questions to
[ELMS](https://umd.instructure.com/courses/1374508/assignments).

{{< /callout >}}