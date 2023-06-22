#include "monty.h"
#include <stdio.h>

bus_t bus = {NULL, NULL, NULL, 0, NULL};

/**
 * main - main function
 * @argc: Number of arguments
 * @argv: Monty arguments
 * Return: 0 on success, EXIT_FAILURE on error
 */
int main(int argc, char *argv[])
{
size_t size = 0, rd = 1, ex;
stack_t *stack = NULL;
FILE *file;
char *items;
unsigned int n = 0;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}

file = fopen(argv[1], "r");
bus.file = file;

if (file == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}

while (rd > 0)
{
items = NULL;
rd = get_line(&items, &size, file);
bus.items = items;
n++;

ex = execute(items, &stack, n, file);

if (rd > 0)
{
if (ex == 0)
{
fprintf(stderr, "L%u: unknown instruction %s\n", n, bus.opcode);
free(items);
free_stack(stack);
fclose(file);
exit(EXIT_FAILURE);
}
}
free(items);
}

free_stack(stack);
fclose(file);
return (EXIT_SUCCESS);
}
