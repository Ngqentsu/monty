#include "monty.h"

#define UNUSED(x) (void)(x)

/**
 * pall - print all values on the stack starting from the top
 * @stack: stack
 * @line_number: line number
 */
void pall(stack_t **stack, unsigned int line_number)
{

stack_t *tmp;

UNUSED(line_number);

tmp = *stack;

while (tmp != NULL)
{
printf("%d\n", tmp->n);
tmp = (*tmp).next;
}
}
