//
// Created by tylerjaacks on 1/2/22.
//

#ifndef VIRTUALMACHINE_STACK_H
#define VIRTUALMACHINE_STACK_H

#include <stdint.h>
#include <stdio.h>

#define STACK_MAX_SIZE 1024

typedef struct {
  uint64_t data[STACK_MAX_SIZE];
  uint64_t top;
} stack_t;

void push(stack_t *stack, uint64_t value) {
  if (stack->top == -1) {
    stack->top = 0;
    stack->data[0] = value;
  } else if (stack->top == STACK_MAX_SIZE) {
    fprintf(stderr, "ERROR: Stack Overflow!");
  } else {
    stack->data[stack->top + 1] = value;
    stack->top = stack->top + 1;
  }
}

uint64_t pop(stack_t *stack) {
  if (stack->top == -1) {
    fprintf(stderr, "ERROR: Stack Underflow!");
  } else {
    uint64_t value = stack->data[stack->top];

    stack->top = stack->top - 1;

    return value;
  }
}

void print_stack(stack_t* stack) {
  // TODO: Implement a pretty stack print.
}

#endif // VIRTUALMACHINE_STACK_H
