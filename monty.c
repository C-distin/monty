#include "monty.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * 
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{
	int fd;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	stack_t *head = NULL;
	unsigned int line_number = 1;
	instruction_t op[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", div},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{"stack", stack},
		{"queue", queue},
		{"add", add},
		{"sub", sub},
		{"div", div},
		{"mul", mul},
		{"mod", mod},
		{NULL, NULL}};

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&line, &len, fd)) != -1)
	{
		char *token;
		char *token2;
		char *token3;
		char *token4;
		char *token5;
		char *token6;
		char *token7;
		char *token8;
		char *token9;
		char *token10;
		char *token11;
		char *token12;
	}
	free(line);
	close(fd);
	free_list(head);

	return (EXIT_SUCCESS);
}
