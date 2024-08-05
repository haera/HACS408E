# Week 1 - Lab 1

## C Programming Refresher

Submit a copy of this document with your answers filled in to [TODO]().

## Questions

1. How many bytes do each of the following data types use? (Hint:
   [`sizeof()`](https://en.cppreference.com/w/c/language/sizeof))
   - `int`
   - `size_t`
   - `uint64_t`
   - `uint8_t*`

2. Suppose you have a variable `string` in memory at the following address:
   ```
   0x1000: "Hello, World!"
   ```
   What is the value of:
   - `string[0]`
   - `&string[0]`
   - `*(string + 5)`
