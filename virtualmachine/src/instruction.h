//
// Created by tylerjaacks on 1/2/22.
//

#ifndef VIRTUALMACHINE_INSTRUCTION_H
#define VIRTUALMACHINE_INSTRUCTION_H

typedef enum {
  PUSH_IMMEDIATE,
  POP,
  DISPLAY,
  HALT
} instruction_type_t;

typedef struct {
  instruction_type_t type;
} instruction_t;

#endif // VIRTUALMACHINE_INSTRUCTION_H
