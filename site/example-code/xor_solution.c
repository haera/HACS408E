#include <stdarg.h>  /* va_start, va_end */
#include <stdbool.h> /* bool type */
#include <stddef.h>  /* NULL, size_t */
#include <stdint.h>  /* uint8_t */
#include <stdio.h>   /* stderr, fprintf, fopen, fread, fwrite, rewind */
#include <stdlib.h>  /* ERROR_SUCCESS, exit */

static const uint8_t KEY[] = "hacs480e";
static const long MAX_INPUT_SIZE = 4 * 1024 * 1024; // 4 Megabytes

// Helper Function Definition(s)

/**
 * This function is printf but it prints to stderr instead of stdout.
 */
int eprintf(const char *restrict fmt, ...);

/**
 * A function to reduce error checking boilerplate. If the condition is
 * false, it prints the message and exits, otherwise returns and continues
 * program execution.
 */
void exit_if_true(bool condition, const char *err_msg);

int main(int argc, char *argv[]) {
  // Exit if arguments are incorrect:
  if (3 != argc) {
    eprintf("USAGE: %s <input_file> <output_file>\n", argv[0]);
    return EXIT_FAILURE;
  }

  // Open input/output files:
  FILE *infile = fopen(argv[1], "rb");
  exit_if_true(NULL == infile, "Unable to open input file for reading.");
  FILE *outfile = fopen(argv[2], "wb");
  exit_if_true(NULL == outfile, "Unable to open output file for writing.");

  // Get file size, exit if larger than 4MB:
  int fseek_res = fseek(infile, 0, SEEK_END);
  exit_if_true(0 != fseek_res, "Couldn't seek to end of file.");

  long file_size = ftell(infile);
  exit_if_true(-1L == file_size, "ftell() failed.");

  // Don't forget to rewind file!
  rewind(infile);

  if (MAX_INPUT_SIZE < file_size) {
    eprintf("Input file was larger than 4MB!");
    exit(EXIT_FAILURE);
  }

  // Create a buffer with the correct size and read the file contents into it
  uint8_t *data = (uint8_t *)malloc(file_size);
  unsigned long bytes = fread(data, 1, file_size, infile);
  exit_if_true(bytes != file_size, "Did not read all data from input file!");

  // Loop through the data buffer, xor-ing every byte with the KEY:
  for (size_t i = 0; i < file_size; i++) {
    data[i] = data[i] ^ KEY[i % sizeof(KEY)];
  }

  bytes = fwrite(data, 1, file_size, outfile);
  exit_if_true(bytes != file_size, "Did not write all data to output file!");

  return EXIT_SUCCESS;
}

int eprintf(const char *restrict fmt, ...) {
  va_list vl;
  va_start(vl, fmt);
  int ret = vfprintf(stderr, fmt, vl);
  va_end(vl);
  return ret;
}

void exit_if_true(bool condition, const char *message) {
  if (condition) {
    eprintf(message);
    exit(EXIT_FAILURE);
  }
}
