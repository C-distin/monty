#include "monty.h"

/**
 * main - take file name as argument
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	FILE *fp;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	stack_t *head = NULL;
	unsigned int line_number = 0;
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
		{NULL, NULL}
	};

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&line, &len, fp)) != -1)
	{
		line_number++;
		if (line[0] == '#')
			continue;
		if (line[0] == '\n')
			continue;
		if (line[0] == '\0')
			continue;
		if (line[0] == '\0')
			continue;
		if (line[0] == '\0')
			continue;
		else
		{
			execute_instruction(line, line_number, op, &head);
		}
	}
	free(line);
	fclose(fp);
	return (0);
}

/**
 * execute_instruction - execute instructions
 * @line: line of code
 * @line_number: line number
 * @op: array of instructions
 * @head: head of stack
 *
 * Return: void
 */
void execute_instruction(char *line, unsigned int line_number,
			 instruction_t op[], stack_t **head)
{
	int i = 0;
	char *token;
	char *delim = " \n\t";

	token = strtok(line, delim);

	while (op[i].opcode != NULL)
	{
		if (strcmp(token, op[i].opcode) == 0)
		{
			op[i].f(head, line_number);
			break;
		}
		i++;
	}

	if (op[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	return;
}
