#include "monty.h"
van_t van = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	/*van_t van = {NULL, NULL, NULL, 0};*/
	unsigned int count = 0;
	char *content;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	FILE *file;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	van.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		van.content = content;
		count++;
		if (read_line > 0)
		{
			_exece_(content, &stack, count, file);
		}
		free(content);
	}
	free_Stack(stack);
	fclose(file);
return (0);
}
