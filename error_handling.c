#include "monty.h"

/**
 * handle_error - handles errors
 * @error_code: error code
 * @line_number: line number
 * Return: void
 */
void handle_error(int error_code, unsigned int line_number)
{
	switch (error_code)
	{
	case 1:
		fprintf(stderr, "USAGE: monty file\n");
		break;
	case 2:
		fprintf(stderr, "Error: Can't open file %s\n"globals.file_name);
		break;
	case 3:
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		break;
	case 4:
		fprintf(stderr, "L%u: usage: pall\n", line_number);
		break;
	case 5:
		fprintf(stderr, "L%u: usage: pop\n", line_number);
		break;
	case 6:
		fprintf(stderr, "L%u: usage: swap\n", line_number);
		break;
	case 7:
		fprintf(stderr, "L%u: usage: add\n", line_number);
		break;
	case 8:
		fprintf(stderr, "L%u: usage: sub\n", line_number);
		break;
	case 9:
		fprintf(stderr, "L%u: usage: div\n", line_number);
		break;
	case 10:
		fprintf(stderr, "L%u: usage: mul\n", line_number);
		break;
	case 11:
		fprintf(stderr, "L%u: usage: mod\n", line_number);
		break;
	case 12:
		fprintf(stderr, "L%u: usage: pchar\n", line_number);
		break;
	case 13:
		fprintf(stderr, "L%u: usage: pstr\n", line_number);
		break;
	case 14:
		fprintf(stderr, "L%u: usage: rotl\n", line_number);
		break;
		case 15:
		fprintf(stderr, "L%u: usage: rotr\n", line_number);
		break;
		case 16:
		fprintf(stderr, "L%u: usage: nop\n", line_number);
		break;
		case 17:
		fprintf(stderr, "L%u: usage: unknown command %s\n", line_number, global.token);
		break;
		case 18:
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		break;
		case 19:
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		break;
		case 20:
		fprintf(stderr, "L%u: can't pstr, stack empty\n", line_number);
		break;
		case 21:
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		break;
		case 22:
		fprintf(stderr, "L%u: can't add, stack empty\n", line_number);
		break;
		case 23:
		fprintf(stderr, "L%u: can't sub, stack empty\n", line_number);
		break;
		case 24:
		fprintf(stderr, "L%u: can't mul, stack empty\n", line_number);
		break;
		case 25:
		fprintf(stderr, "L%u: can't div, stack empty\n", line_number);
		break;
		case 26:
		fprintf(stderr, "L%u: can't mod, stack empty\n", line_number);
		break;
		case 27:
		fprintf(stderr, "L%u: can't rotl, stack empty\n", line_number);
		break;
		case 28:
		fprintf(stderr, "L%u: can't rotr, stack empty\n", line_number);
		break;
		case 29:
		fprintf(stderr, "L%u: can't nop, stack empty\n", line_number);
		break;
		case 30:
		fprintf(stderr, "L%u: can't swap, stack empty\n", line_number);
		break;
		case 31:
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		break;
		case 32:
		fprintf(stderr, "L%u: can't pstr, value out of range\n", line_number);
		break;
		case 33:
		fprintf(stderr, "L%u: can't div, by zero\n", line_number);
		break;
		case 34:
		fprintf(stderr, "L%u: can't mod, by zero\n", line_number);
		break;
	}
	
	exit(EXIT_FAILURE);
}
