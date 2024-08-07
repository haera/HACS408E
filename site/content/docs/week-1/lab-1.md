---
title: "Lab 1: C Programming - XOR"
type: docs
next: docs/week-1/lab-2
---

{{< callout emoji="💡" >}}

**Explaination:**

Write a small C program which reads data from a file and XOR's it with a hard
coded `key`. It should exit if the file is larger than 4MB.

<u>Goals:</u>

- Recall basic C syntax.
- Know how to install a compiler and compile a C program.
- Be familliar with looking up function documentation of the C standard library.

{{< /callout >}}

1. **Setup Your Environment:**
   - Choose either [`gcc`](https://gcc.gnu.org/) or
     [`clang`](https://clang.llvm.org/) and follow the instructions on thier
     website to install it. <br> (NOTE: `gcc` is already installed on your
     vm...)
   - In the text editor of your choice, create a new file named `xor_main.c` (or
     whatever, it doesn't matter).

1. **Importing Standard Library Modules:**

   - Here are some suggested `#include`s to use: {{< code
     source=/example-code/xor_main.c lang=C len=5 >}}

1. **Main Function:**

   - All C programs need to have a main function defined. We don't care that you
     know how to parse arguments so have a template for you to start from. {{<
     code source=/example-code/xor_main.c lang=C start=7 len=20 >}}

1. **Define Some Functions to Read/Write Files:**

   - Write a function to read the contents of a file into a buffer.
     - Some standard library functions that may be useful: <br>
       [`fopen()`](https://en.cppreference.com/w/c/io/fopen),
       [`fread()`](https://en.cppreference.com/w/c/io/fread),
       [`fseek()`](https://en.cppreference.com/w/c/io/fseek),
       [`ftell()`](https://en.cppreference.com/w/c/io/ftell),
       [`rewind()`](https://en.cppreference.com/w/c/io/rewind),
       [`fclose()`](https://en.cppreference.com/w/c/io/fclose)
     - Practice defensive programming by handling any errors.
     - Only read the file if the the file size is NOT larger than 4MB.
     - Read the contents into a
       [dynamically allocated](https://en.cppreference.com/w/c/memory/malloc)
       buffer.

1. **Implement the XOR Function:**

   - Write a function to XOR the contents of `data` with the `KEY` constant.
   - Make sure to think about how to handle when the data is larger than the key
     (this is the case most of the time).

1. **Implement Main's Functionality:**

   - In the main function, read the contents of the `data` file into a buffer.
   - Use the XOR function to process the data.
   - Remember to free any dynamically allocated memory when you're done using
     it.

1. **Compile Your Program:**

   - Open a terminal and navigate to your project directory.
   - Compile your C program using the compiler you previously installed:

   ```{filename=Bash}
   gcc -Wall -Werror -o xor ./xor_main.c
   ```

#### Example:

Here is an example usage of the program.

```sh {filename=Bash}
# Create some junk data:
dd if=/dev/random of=test.bin bs=1M count=1

# Run the program
./xor test.bin out1
./xor out1 out2

# If your program works then this should return nothing
diff out1 out2
```

#### Tips:

- This is not a programming class, handling errors doesn't mean it has to be
  pretty. If something fails, just exit and let the OS handle cleanup.
- Test with different input files to validate your program, something over 4MB.
- Don't forget to `free()` your buffer(s)!

### Questions:

{{< callout type="info" >}}

Submit a markdown file with answers to these questions somewhere? `TODO`

{{< /callout >}}

1. Explain in your own words what a
   [pointer](https://en.wikipedia.org/wiki/Pointer_(computer_programming)) is.

1. How many bytes do each of the following data types use? (Hint:
   [`sizeof()`](https://en.cppreference.com/w/c/language/sizeof))
   - `int`
   - `size_t`
   - `uint64_t`
   - `uint8_t*`

1. Suppose you have a variable `string` in memory at the following address:
   ```
   0x1000: "Hello, World!"
   ```
   What is the value of:
   - `string[0]`
   - `&string[0]`
   - `*(string + 5)`
