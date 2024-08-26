#include <stdarg.h>  /* va_start, va_end */
#include <stdbool.h> /* bool type */
#include <stddef.h>  /* NULL, size_t */
#include <stdint.h>  /* uint8_t */
#include <stdio.h>   /* stderr, fprintf, fopen, fread, fwrite, rewind */
#include <stdlib.h>  /* ERROR_SUCCESS, exit */

static const uint8_t KEY[] = "hacs480e";
static const long MAX_INPUT_SIZE = 4 * 1024 * 1024; // 4 Megabytes

// Helper Function Declaration(s)

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

// Function Declarations
size_t get_file_size(FILE *handle);
uint8_t *allocate_buf_and_read_data(FILE *handle, size_t *p_buf_size);
void write_data_and_free(FILE *handle, uint8_t *buffer, size_t buf_size);

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

  size_t buf_size = -1;
  uint8_t *data = allocate_buf_and_read_data(infile, &buf_size);
  exit_if_true(NULL == data, "Error allocating buffer.");
  exit_if_true(-1 == buf_size, "Error buf_size was not updated!");

  // Loop through the data buffer, xor-ing every byte with the KEY:
  for (size_t i = 0; i < buf_size; i++) {
    data[i] = data[i] ^ KEY[i % sizeof(KEY)];
  }

  write_data_and_free(outfile, data, buf_size);

  // Remember p_buffer, points to a buffer that was malloc-ed
  // so dereference before free-ing!
  free(data);

  return EXIT_SUCCESS;
}

// Helper Function Implementations
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

// Your Function Implementations
size_t get_file_size(FILE *handle) {
  // Get file size, exit if larger than 4MB:
  int fseek_res = fseek(handle, 0, SEEK_END);
  exit_if_true(0 != fseek_res, "Couldn't seek to end of file.");

  size_t file_size = (size_t)ftell(handle);
  exit_if_true(-1L == file_size, "ftell() failed.");

  // Don't forget to rewind file!
  rewind(handle);

  if (MAX_INPUT_SIZE < file_size) {
    eprintf("Input file was larger than 4MB!");
    exit(EXIT_FAILURE);
  }

  return file_size;
}

uint8_t *allocate_buf_and_read_data(FILE *handle, size_t *buf_size) {
  // Calculate size for malloc
  size_t file_size = get_file_size(handle);

  // Create a buffer with the correct size
  uint8_t *buffer = (uint8_t *)malloc(file_size);

  // Read the file contents into the allocated buffer
  unsigned long num_bytes = fread(buffer, 1, file_size, handle);
  exit_if_true(num_bytes != file_size, "Did not read all data from input file!");

  // Make sure to set the buffer size
  *buf_size = num_bytes;

  return buffer;
}

void write_data_and_free(FILE *handle, uint8_t *buffer, size_t buf_size) {
  unsigned long num_bytes = fwrite(buffer, 1, buf_size, handle);
  exit_if_true(num_bytes != buf_size, "Did not write all data to output file!");
}
