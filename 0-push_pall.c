#include "monty.h"

#define UNUSED(x) (void)(x)

/**
 * push - pushes an element to the stack
 * @stack: stack
 * @line_number: line number
 */
void push(stack_t **stack, unsigned int line_number)
{
int n;

if (bus.arg == NULL || !is_integer(bus.arg))
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}

n = atoi(bus.arg);
if (bus.lifi == 0)
addnode(stack, n);
else
addqueue(stack, n);
}


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
