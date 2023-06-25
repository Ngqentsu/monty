#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: stack
 * @line_number: line number
 */
void swap(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;
int h;

if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
fclose(bus.file);
free(bus.items);
free_stack(*stack);
exit(EXIT_FAILURE);
}

tmp = *stack;
h = tmp->n;
tmp->n = tmp->next->n;
tmp->next->n = h;
}
