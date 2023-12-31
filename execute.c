#include "monty.h"

/**
* execute - executes the opcode
* @stack: head linked list - stack
* @line_number: line counter
* @file: poiner to monty file
* @items: line items
*/
int execute(char *items, stack_t **stack, unsigned int line_number, FILE *file)
{
	instruction_t opst[] = {
				{"push", push},
				{"pall", pall},
				{"pint", pint},
				{"pop", pop},
				{"swap", swap},
				{"add", add},
				{"nop", nop},
				{"sub", sub},
				{"div", div_op},
				{"mul", mul_op},
				{"mod", mod_op},
				{"pchar", pchar},
				{"pstr", pstr},
				{"rotl", rotl},
				{"rotr", rotr},
				{"stack", f_stack},
				{"queue", f_queue},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(items, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, line_number);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", line_number, op);
		fclose(file);
		free(items);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
