#include "monty.h"

/**
 * run_instruction - runs the instructions
*/

void run_instruction(void)
{
stack_t *stack = NULL;

if (arguments->tokencnt == 0)
	return;
arguments->instruction->f(&stack, arguments->line_number);
}
