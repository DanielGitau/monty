#ifndef MONTY_H
#define MONTY_H
#define  _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct van_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct van_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  van_t;
extern van_t van;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void func_push(stack_t **head, unsigned int num);
void func_pall(stack_t **head, unsigned int num);
void func_pint(stack_t **head, unsigned int num);
int _exece_(char *content, stack_t **head, unsigned int count, FILE *file);
void free_Stack(stack_t *head);
void func_pop(stack_t **head, unsigned int count);
void func_swap(stack_t **head, unsigned int count);
void func_add(stack_t **head, unsigned int count);
void func_nop(stack_t **head, unsigned int count);
void addNode(stack_t **head, int num);

#endif
