#include <assert.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define STACK_MAX_SIZE 1024;

typedef struct {
  uint64_t *data;
  size_t size;
} stack_t;

typedef struct {
  stack_t stack;
} virtual_machine_t;

int main(int argc, char *argv[]) {
  printf("Hello, world!\n");

  return EXIT_SUCCESS;
}