#include "monty.h"

/**
 *mod_op - calculates the rest of / between 2nd top element and top element
 *@stack: stack
 *@line_number: line number
 */
void mod_op(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;
int h;
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
fclose(bus.file);
free(bus.items);
free_stack(*stack);
exit(EXIT_FAILURE);
}

tmp = *stack;

if (tmp->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", line_number);
fclose(bus.file);
free(bus.items);
free_stack(*stack);
exit(EXIT_FAILURE);
}

h = tmp->next->n % tmp->n;
tmp->next->n = h;
*stack = tmp->next;
free(tmp);
}
