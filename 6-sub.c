#include "monty.h"

/**
 * sub - subtracts the top element from the second top element
 * @stack: stack
 * @line_number: line number
 */
void sub(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;
int h;

if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
fclose(bus.file);
free(bus.items);
free_stack(*stack);
exit(EXIT_FAILURE);
}

tmp = *stack;
h = tmp->next->n - tmp->n;
tmp->next->n = h;
*stack = tmp->next;
free(tmp);
}
