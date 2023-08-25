#include "monty.h"
/**
 * func_pint - prints the top
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void func_pint(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(van.file);
		free(van.content);
		free_Stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
