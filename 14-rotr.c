#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * @stack: stack
 * @line_number: line number
 */
void rotr(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;

(void)line_number;

if (*stack == NULL || (*stack)->next == NULL)
return;

tmp = *stack;

while (tmp->next != NULL)
{
tmp = tmp->next;
}

tmp->next = *stack;
tmp->prev->next = NULL;
tmp->prev = NULL;
(*stack)->prev = tmp;
*stack = tmp;
}
