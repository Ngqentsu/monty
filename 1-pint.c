#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * @stack: stack
 * @line_number: line numb
 */
void pint(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
fclose(bus.file);
free(bus.items);
free_stack(*stack);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}
