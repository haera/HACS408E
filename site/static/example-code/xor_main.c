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
