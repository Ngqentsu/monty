#include "monty.h"

/**
 * addqueue - add node to the tail stack
 * @stack: stack
 * @n: value
*/
void addqueue(stack_t **stack, int n)
{
stack_t *new_node;

new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}

(*new_node).n = n;
(*new_node).next = NULL;

if (*stack == NULL)
{
*stack = new_node;
(*new_node).prev = NULL;
}
else
{
(*stack)->next = new_node;
(*new_node).prev = *stack;
}
}
