#include <stdbool.h> /* bool */
#include <stddef.h>  /* NULL, size_t */
#include <stdint.h>  /* uint8_t */
#include <stdio.h>   /* printf, stdout, <file functions...>, rewind */
#include <stdlib.h>  /* EXIT_SUCCESS, EXIT_FAILURE, exit */

static const long MAX_INPUT_SIZE = 4 * 1024 * 1024; // 4 Megabytes
static const uint8_t KEY[] = "hacs480e";

// Function Declarations:
size_t get_file_size(FILE *handle);
uint8_t *allocate_buf_and_read_data(FILE *handle, size_t *p_buf_size);
void write_data_and_free(FILE *handle, uint8_t *buffer, size_t buf_size);

int main(int argc, char *argv[]) {
  // Exit if arguments are incorrect:
  if (3 != argc) {
    printf("USAGE: %s <input_file> <output_file>\n", argv[0]);
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
