#include "monty.h"

/**
 * invalid_instruction - handles an invalid instruction
*/

void invalid_instruction(void)
{
dprintf(2, "L%d: unknown instruction %s\n",
	       arguments->line_number, arguments->tokens[0]);
free_all_arguments();
exit(EXIT_FAILURE);
}

/**
 * get_instruction - sets the instruction based on first token of command
*/
void get_instruction(void)
{
int i = 0;
instruction_t opcodefunc[] = {
	{push, &push}, {pall, &pall},
	{NULL, NULL}
};
if (arguments->tokencnt == 0)
	return;
for (; opcodefunc[i].opcode != NULL; i++)
if (strcmp(opcodefunc[i].opcode, arguments->tokens[0]) == 0)
{
arguments->instruction->opcode = opcodefunc[i].opcode;
arguments->instruction->f = opcodefunc[i].f;
return;
}
}
invalid_instruction();
}
