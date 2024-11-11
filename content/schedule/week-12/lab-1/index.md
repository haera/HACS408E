---
title: "Lab-1: Go Reversing Example"
type: docs
weight: 1
---

[Lecture on RE + Golang Tips](/schedule/lectures/supplemental/reversing_tips/)

## Overview

{{< callout emoji="💡" >}}

This lab is to get you practice interacting with Go binaries! Go is a modern
programming language performance and memory safety in mind. It compiles quickly
to machine code and has the convience of gargabe collection and powerful runtime
reflection. However because of this, it can be quite challengeing to reverse
engineer.

**Goals:**

- Write a simple Go program
- Practice Reversing Go programs
- Practice using Ghidra

**Estimated Time:** `60 Minutes`

{{< /callout >}}

## Instructions

{{% steps %}}

### Download and Install Go

Follow the instructions to install Go:
[https://go.dev/doc/install](https://go.dev/doc/install)

### Create an Example Program

Create a hello directory and initialize it as a `go module`:

```sh
mkdir hello && cd hello/
go mod init example/hello
```

This will create a `go.mod` file in the `hello/` directory. Next write the hello
world program in the `main.go` file:

```go {filename=main.go}
package main

import "fmt"

func main() {
    fmt.Println("Hello, World!")
}
```

Build and run your program with to verify that it works.

```sh {filename=Bash}
go build
./hello
# Hello, World!
```

Run `file` and `strings` on the binary:

1. **Is the program stripped? Does it contain debugging symbols?**
2. **Is the `Hello World!` string in your program in the `strings` output?**
   - Please provide the string containing the bytes `Hello World!`

For more information see the
[getting started](https://go.dev/doc/tutorial/getting-started) page of the go
documentation.

### Open your hello world program in Ghidra

Import the binary into Ghidra and run the auto analysis on it. Navigate to
`main.main`

TODO: Questiosn

### Reverse the following binary:

TODO

{{% /steps %}}

## Tips

- TODO

## Submission

{{< callout emoji="📝" >}}

Submit a markdown file with any code you wrote and the answers to questions to
[ELMS](https://umd.instructure.com/courses/1374508/assignments).

{{< /callout >}}
