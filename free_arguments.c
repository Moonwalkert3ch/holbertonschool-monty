#include "monty.h"

/**
 * free_head - frees memory allocated for the head and sets it to null
*/

void free_head(void)
{
if (arguments->head)
	free_stack(arguments->head);
arguments->head = NULL;
}

/**
 * free_arguments - frees memory allocated to argument pointer
*/

void free_arguments(void)
{
if (arguments == NULL)
	return;
if (arguments->instruction)
{
free(arguments->instruction);
arguments->instruction = NULL;
}

free_head();

if (arguments->command)
{
free(arguments->command);
arguments->command = NULL;
}
free(arguments);
}

/**
 * free_all_arguments - frees all allocated memory for arguments
*/

void free_all_arguments(void)
{
close_content();
free_tokens();
free_arguments();
}
