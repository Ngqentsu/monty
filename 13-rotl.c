#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: stack
 * @line_number: line number
 */
void rotl(stack_t **stack, unsigned int line_number)
{
stack_t *tmp, *h = *stack;

(void)line_number;

if (*stack == NULL || (*stack)->next == NULL)
return;

tmp = *stack;

while (tmp->next != NULL)
{
tmp = tmp->next;
}

tmp->next = h;
h->prev = tmp;
*stack = h->next;
(*stack)->prev = NULL;
h->next = NULL;
}
