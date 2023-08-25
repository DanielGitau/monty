#include "monty.h"
/**
 * func_swap - adds the top two elements of the stack.
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void func_swap(stack_t **head, unsigned int count)
{
	stack_t *temp;
	int len = 0, aux;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(van.file);
		free(van.content);
		free_Stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	aux = temp->n;
	temp->n = temp->next->n;
	temp->next->n = aux;
}
