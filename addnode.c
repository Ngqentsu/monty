#include "monty.h"

/**
 * addnode - add node to the stack
 * @stack: stack
 * @n: value
*/
void addnode(stack_t **stack, int n)
{
stack_t *new_node;

new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}

(*new_node).n = n;
(*new_node).next = *stack;
(*new_node).prev = NULL;

if (stack)
{
(*stack)->prev = new_node;
}

*stack = new_node;
}
