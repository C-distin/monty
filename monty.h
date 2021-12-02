#ifndef __MONTY_H__
#define __MONTY_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define STACK 0
#define QUEUE 1
#define DELIM " \t\r\n\a"
#define _GNU_SOURCE

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *head;
extern stack_t *tail;

/**
 * cmd_s - struct for commands
 * @cmd: command
 * @arg: argument
 * @fd: file descriptor
 * @mode: mode
 * @line_number: line number
 * 
 */
typedef struct cmd_s
{
        char *token;
        char *arg;
        int fd;
        int *mode;
        unsigned int line_number;
        stack_t *head;
        stack_t *tail;
        struct cmd_s *next;
} cmd_t;

/**
 * struct instruction_s - token code and its function
 * @token_code: the token code
 * @f: function to handle the token code
 */
typedef struct instruction_s
{
        char *token_code;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void eval(char *line, stack_t **h, stack_t **t, int *mode, unsigned int line_number);
int parse(char *line, cmd_t *cmd);
void run(cmd_t *cmd);
void push(cmd_t *cmd);
void pall(cmd_t *cmd);
void pint(cmd_t *cmd);
void pop(cmd_t *cmd);
void swap(cmd_t *cmd);
void add(cmd_t *cmd);
void nop(cmd_t *cmd);
void sub(cmd_t *cmd);
void divide(cmd_t *cmd);
void mul(cmd_t *cmd);
void mod(cmd_t *cmd);
void pchar(cmd_t *cmd);
void pstr(cmd_t *cmd);
void rotl(cmd_t *cmd);
void rotr(cmd_t *cmd);
void free_list(stack_t **head);
void stack_mode(cmd_t *cmd);
void queue_mode(cmd_t *cmd);
void free_cmd(cmd_t *cmd);
void free_stack(stack_t **head);
void handle_error(int error_code, unsigned int line_number);

#endif /* _MONTY_H_ */
