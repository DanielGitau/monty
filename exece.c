#include "monty.h"
/**
* _exece_ - executes the opcode
* @stack: head linked list - stack
* @count: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int _exece_(char *content, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t op_func[] = {
				{"push", func_push}, {"pall", func_pall}, {"pint", func_pint},
				{"pop", func_pop},
				{"swap", func_swap},
				{"add", func_add},
				{"nop", func_nop},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	van.arg = strtok(NULL, " \n\t");
	while (op_func[i].opcode && op)
	{
		if (strcmp(op, op_func[i].opcode) == 0)
		{	op_func[i].f(stack, count);
			return (0);
		}
		i++;
	}
	if (op && op_func[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", count, op);
		fclose(file);
		free(content);
		free_Stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
