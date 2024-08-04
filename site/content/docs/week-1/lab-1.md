---
title: "Lab 1: XOR a file"
type: docs
next: docs/week-1/lab-2
---

## Goal

Write a small C program which reads data from a file and XOR's it with a hard
coded `key`. It should exit if the file is larger than 4MB.

**By the end of this lecture you should:**

- Recall basic C syntax.
- Know how to install a compiler and compile a C program.
- Be familliar with looking up function documentation of the C standard library.

{{< downloadbutton file="lab-1_template.md" text="Download Lab" >}}

#### Steps to Complete the Assignment:

1. **Setup Your Environment:**
   - Choose either [`gcc`](https://gcc.gnu.org/) or
     [`llvm`](https://clang.llvm.org/) and follow the instructions on thier
     website to install it.
   - In the text editor of your choice, create a new file named `xor.c`.
   - Here is a template to get you started:
     ```C
     #include <stdbool.h> /* bool */
     #include <stddef.h>  /* NULL, size_t */
     #include <stdint.h>  /* uint8_t */
     #include <stdio.h>   /* printf, fopen, fread, fwrite, fseek, ftell, rewind */
     #include <stdlib.h>  /* EXIT_SUCCESS, EXIT_FAILURE, exit */

     static const uint8_t KEY[] = "hacs480e";
     static const long MAX_INPUT_SIZE = 4 * 1024 * 1024; // 4 Megabytes

     // Function Declarations:
     uint8_t *read_input_data(const char *file_path);
     void write_output_data(const char *file_path, uint8_t *data);
     void xor_data(uint8_t *data);

     int main(int argc, char *argv[]) {
       // Exit if arguments are incorrect:
       if (3 != argc) {
         printf("USAGE: %s <input_file> <output_file>\n", argv[0]);
         return EXIT_FAILURE;
       }

       uint8_t *data = read_input_data(argv[1]);
       xor_data(data);
       write_output_data(argv[2], data);

       return EXIT_SUCCESS;
     }
     ```

1. **Define functions to read and write files:**
   - Write a function to read the contents of a file into a buffer. It should:
     - Use only standard library functions:
       [`fopen()`](https://en.cppreference.com/w/c/io/fopen)
       [`fread()`](https://en.cppreference.com/w/c/io/fread)
       [`fseek()`](https://en.cppreference.com/w/c/io/fseek)
       [`ftell()`](https://en.cppreference.com/w/c/io/ftell)
       [`rewind()`](https://en.cppreference.com/w/c/io/rewind)
       [`fclose()`](https://en.cppreference.com/w/c/io/fclose)
     - Check the results of file functions for errors.
     - Allocate a buffer if the the file size is not larger than 4MB.
     - Read the contents into the allocated buffer.
1. **Implement the XOR Function:**
   - Write a function to XOR the contents of `data` with the `key`.
   - Ensure the key is repeated if it is shorter than the data.

1. **Main Function to Execute the Program:**
   - In the main function, read the contents of the `key` and `data` files.
   - Use the XOR function to process the data.
   - Print the resulting flag.
   - Remember to free any dynamically allocated memory.

1. **Compile the Program:**
   - Open your terminal and navigate to your project directory.
   - Compile your C program using GCC:
     ```sh
     gcc -o xor_decrypt xor_decrypt.c
     ```

1. **Run the Program:**
   - Execute the compiled program:
     ```sh
     ./xor_decrypt
     ```

1. **Check the Output:**
   - The program should print the flag, which is the XOR result of the `data`
     content with the `key`.

#### Example:

- If `key` file contains: `mysecretkey`
- If `data` file contains: `encryptthisdata`
- The program should print the encrypted flag after XOR operation.

#### Tips:

- Ensure the key is long enough to cover the entire data string by repeating.
- Handle file errors gracefully to avoid program crashes.
- Test with different keys and data contents to validate your program.
