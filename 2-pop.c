#include "monty.h"

/**
 * pop - prints the top
 * @stack: stack
 * @line_number: line number
 */
void pop(stack_t **stack, unsigned int line_number)
{

stack_t *tmp;

if (*stack == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
fclose(bus.file);
free(bus.items);
free_stack(*stack);
exit(EXIT_FAILURE);
}

tmp = *stack;
*stack = (*stack)->next;

if (*stack)
{
(*stack)->prev = NULL;
}

free(tmp);
}
