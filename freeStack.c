#include "monty.h"
/**
* free_Stack - frees a doubly linked list
* @head: head of the stack
*/
void free_Stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
