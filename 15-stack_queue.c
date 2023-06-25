#include "monty.h"

/**
 * f_stack - sets the format of the data to a stack (LIFO)
 * @stack: stack
 * @line_number: line number
 */
void f_stack(stack_t **stack, unsigned int line_number)
{
(void)stack;
(void)line_number;
bus.lifi = 0;
}

/**
 * f_queue - sets the format of the data to a queue (FIFO)
 * @stack: stack
 * @line_number: line number
 */
void f_queue(stack_t **stack, unsigned int line_number)
{
(void)stack;
(void)line_number;
bus.lifi = 1;
}
