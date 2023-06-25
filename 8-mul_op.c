#include "monty.h"

/**
 * mul_op - multiplies the second top element with the top element
 * @stack: stack
 * @line_number: line number
 */
void mul_op(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;
int h;

if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
fclose(bus.file);
free(bus.items);
free_stack(*stack);
exit(EXIT_FAILURE);
}

tmp = *stack;
h = tmp->n * tmp->next->n;
tmp->next->n = h;
*stack = tmp->next;
free(tmp);
}
