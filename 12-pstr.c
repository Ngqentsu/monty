#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 * @stack: stack
 * @line_number: line number
 */
void pstr(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;
int h;

(void)line_number;

tmp = *stack;

while (tmp != NULL)
{
h = tmp->n;

if (h > 127 || h <= 0)
{
break;
}

printf("%c", h);

tmp = tmp->next;
}

printf("\n");
}
