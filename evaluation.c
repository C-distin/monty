#include "monty.h"

/**
 * eval - Evaluates the operation
 * @line: The line of the file
 * @h: head of doubly linked list
 * @t: tail of doubly linked list
 * @mode: mode of operation
 * @line_number: line number
 */
void eval(char *line, stack_t **h, stack_t **t, int mode, int line_number)
{
	cmd_t *cmd;

	cmd->mode = mode;
	cmd->line_number = line_number;
	cmd->head = h;
	cmd->tail = t;

	if (parse(line, &cmd) == 1)
		run(&cmd);
}
