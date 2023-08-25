#include "monty.h"
/**
 * func_pop - prints the top
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void func_pop(stack_t **head, unsigned int count)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(van.file);
		free(van.content);
		free_Stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = temp->next;
	free(temp);
}
