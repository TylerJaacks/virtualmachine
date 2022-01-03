#include <stdlib.h>

#include "virtual_machine.h"

int main(int argc, char *argv[]) {
  virtual_machine_t *virtual_machine = { 0 };

  initialize_virtual_machine(virtual_machine);
  initialize_instructions(virtual_machine);

  return EXIT_SUCCESS;
}