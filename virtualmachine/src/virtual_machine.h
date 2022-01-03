//
// Created by tylerjaacks on 1/2/22.
//

#ifndef VIRTUALMACHINE_VIRTUAL_MACHINE_H
#define VIRTUALMACHINE_VIRTUAL_MACHINE_H

#include "stack.h"

#include "instruction.h"

typedef struct {
  stack_t stack;
  instruction_t instructions[4];
} virtual_machine_t;

void initialize_virtual_machine(virtual_machine_t *virtual_machine) {
  virtual_machine = &((virtual_machine_t) { });

  virtual_machine->stack = (stack_t) { .top = -1 };
}

void initialize_instructions(virtual_machine_t *virtual_machine) {
  virtual_machine->instructions[0] = (instruction_t) { .type = PUSH_IMMEDIATE };
  virtual_machine->instructions[1] = (instruction_t) { .type = POP };
  virtual_machine->instructions[2] = (instruction_t) { .type = DISPLAY };
  virtual_machine->instructions[3] = (instruction_t) { .type = HALT };
}

#endif // VIRTUALMACHINE_VIRTUAL_MACHINE_H
