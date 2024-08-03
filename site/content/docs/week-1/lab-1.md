---
title: "Lab 1: C Programming"
type: docs
next: docs/week-1/lab-2
---

Write a C program to read the contents of two files, `key` and `data`, XOR the contents of `data` with the `key`, and print out the resulting flag.

{{< downloadbutton file="/labs/week-1/lab-1.txt" text="Download Lab" >}}

#### Steps to Complete the Assignment:

1. **Setup Your Environment:**
    - Ensure you have a C compiler installed.
    - Open your text editor and terminal.
    - Create a new directory for your project.

2. **Create the Required Files:**
    - Create two text files, `key` and `data`, and place them in your project directory.
    - Fill these files with appropriate test data. For example:
      - `key` file content: `mysecretkey`
      - `data` file content: `encryptthisdata`

3. **Write the C Program:**
    - Open a new C file in your text editor, name it `xor_decrypt.c`.

4. **Include Necessary Headers:**
    - Start by including standard libraries required for file handling and memory management.

5. **Define a Function to Read Files:**
    - Write a function to read the contents of a file and return it as a string.
    - Handle file errors gracefully.

6. **Implement the XOR Function:**
    - Write a function to XOR the contents of `data` with the `key`.
    - Ensure the key is repeated if it is shorter than the data.

7. **Main Function to Execute the Program:**
    - In the main function, read the contents of the `key` and `data` files.
    - Use the XOR function to process the data.
    - Print the resulting flag.
    - Remember to free any dynamically allocated memory.

8. **Compile the Program:**
    - Open your terminal and navigate to your project directory.
    - Compile your C program using GCC:
      ```sh
      gcc -o xor_decrypt xor_decrypt.c
      ```

9. **Run the Program:**
    - Execute the compiled program:
      ```sh
      ./xor_decrypt
      ```

10. **Check the Output:**
    - The program should print the flag, which is the XOR result of the `data` content with the `key`.

#### Example:
- If `key` file contains: `mysecretkey`
- If `data` file contains: `encryptthisdata`
- The program should print the encrypted flag after XOR operation.

#### Tips:
- Ensure the key is long enough to cover the entire data string by repeating.
- Handle file errors gracefully to avoid program crashes.
- Test with different keys and data contents to validate your program.
