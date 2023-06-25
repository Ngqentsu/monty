#include "monty.h"

/**
 * pchar - prints the char at the top of the stack
 * @stack: stack
 * @line_number: line number
 */
void pchar(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;
int h;

tmp = *stack;

if (tmp == NULL)
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
fclose(bus.file);
free(bus.items);
free_stack(*stack);
exit(EXIT_FAILURE);
}

h = tmp->n;

if (h < 0 || h > 127)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
fclose(bus.file);
free(bus.items);
free_stack(*stack);
exit(EXIT_FAILURE);
}

printf("%c\n", h);
}
