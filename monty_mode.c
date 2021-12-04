#include "monty.h"

/**
 * stack_mode - change to LIFO mode
 * @stack: stack
 * @line_number: line number
 *
 * Return: void
 */
void stack_mode(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	global_mode = LIFO;
}

/**
 * queue_mode - change to FIFO mode
 * @stack: stack
 * @line_number: line number
 * 
 * Return: void 
 */
void queue_mode(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	global_mode = FIFO;
}
