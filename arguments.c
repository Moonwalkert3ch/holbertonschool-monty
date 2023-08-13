#include "monty.h"

/**
 * check_arguments - checks the number of command arguments
 * @argc: counts the number of command arguments
*/

void check_arguments(int argc)
{
if (argc == 2)
	return;
dprintf(2, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}

/**
 * set_arguments - assigns a pointer to the arg_s structure
*/

void set_arguments(void)
{
arguments = malloc(sizeof(arg_t));
if (arguments == NULL)
	malloc_failed();

arguments->instruction = malloc(sizeof(instruction_t));
if (arguments->instruction == NULL)
	malloc_failed();

arguments->content = NULL;
arguments->head = NULL;
arguments->command = NULL;
arguments->tokencnt = 0;
arguments->line_number = 0;
arguments->stack_len = 0;
arguments->stack = 1;
}
