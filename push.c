#include "monty.h"
/**
 * func_push - add node to the stack
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void func_push(stack_t **head, unsigned int count)
{
	int n, j = 0, flag = 0;

	if (van.arg)
	{
		if (van.arg[0] == '-')
			j++;
		for (; van.arg[j] != '\0'; j++)
		{
			if (van.arg[j] > 57 || van.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(van.file);
			free(van.content);
			free_Stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(van.file);
		free(van.content);
		free_Stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(van.arg);
	if (van.lifi == 0)
		addNode(head, n);
}
