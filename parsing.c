#include "monty.h"

/**
 * _parsing - function that parses the input
 * @line: line of the file
 * @cmd: command
 * Return: void
 */
void _parsing(char *line, cmd_t *cmd)
{
	char *token;
	char *delim = " \t\n\r";
	char *arg;
	int size;
	unsigned int line_num = cmd->line_number;

	if (line == NULL)
		return;
	
	token = strtok(line, delim);

	if (token == NULL || token[0] == '#')
		return;

	if (strcmp(token, "stack") == 0)
	{
		*cmd->mode = 0;
		return (0);
	}

	if (strcmp(token, "queue") == 0)
	{
		*cmd->mode = 1;
		return (0);
	}

	if (strcmp(token, "push") == 0)
	{
		arg = strtok(NULL, delim);
		if (arg == NULL)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_num);
			exit(EXIT_FAILURE);
		}

		size = strlen(arg);

		while (size--)
		{
			if (size == 0 && arg[size] == '-')
			{
				fprintf(stderr, "L%d: usage: push integer\n", line_num);
				exit(EXIT_FAILURE);
			}
		}

		cmd->arg = atoi(arg);
		cmd->token = token;

		return (1);
	}

	cmd->token = token;

	return (1);
}
