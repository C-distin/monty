#include "monty.h"

/**
 * monty_stack - function that prints the stack
 * @cmd: command
 */
void monty_stack(cmd_t *cmd)
{
	*cmd->mode = 0;
}

/**
 * monty_queue - function that prints the queue
 * @cmd: command
 */
void monty_queue(cmd_t *cmd)
{
	*cmd->mode = 1;
}
