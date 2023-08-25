#include "monty.h"
/**
 * func_pall - prints the stack
 * @head: stack head
 * @count: no used
 * Return: no return
*/
void func_pall(stack_t **head, unsigned int count)
{
	stack_t *temp;
	(void)count;

	temp = *head;
	if (temp == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
