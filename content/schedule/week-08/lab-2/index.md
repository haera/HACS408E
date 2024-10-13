---
title: "Lab 2: Dynamic Function Calls"
type: docs
weight: 2
---

## Overview

{{< callout emoji="💡" >}}

explaination

**Goals:**

- goal
- goal
- goal

**Estimated Time:** `90 Minutes`

{{< /callout >}}

## Instructions

{{% steps %}}

### Get the example program.

{{< downloadbutton file="program.exe" text="program.exe" >}}

### Run the program, then trace it with `procmon`

You should see it try and fail to open a `.dll` file a lot of times. Look for
many calls to `CreateFile` in a row.

1. **What is the name of the file that fails to open?**

### Examine the program in Ghidra

Select `Search > For Strings` in the ghidra menu and find the `.dll` name that
the program is trying to open. Double click the `XREF` (cross reference) to see
where the string gets used.

1. **What does the `LoadLibrary` Windows API function do?**
1. **What function is the program trying to call?**
1. **What Windows API function is it using to lookup this function?**

### Download the shared library

{{< downloadbutton file="MyPusts.dll" text="MyPuts.dll" >}}

1. What functions does it export?

{{% /steps %}}

## Part 2: Obfuscation

{{% steps %}}

### Download the `hash-example` files

{{< downloadbutton file="hash-example.zip" text="hash-example.zip" >}}

### Review the program in Ghidra to get a sense of what it's doing

1. TODO

### Use `x32-debug` to step through until you get to when it calls the secret function.

1. **What function gets called?**
1. **Were you able to figure this out in any other ways (context clues, etc.)?**

{{% /steps %}}

## Tips

- tip
- tip
- tip

## Submission

{{< callout emoji="📝" >}}

Submit a markdown file with any code you wrote and the answers to questions to
[ELMS](https://umd.instructure.com/courses/1374508/assignments).

{{< /callout >}}
