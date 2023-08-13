#include "monty.h"

/**
 * tokenize_command - tokenizes the command line read from file
*/

void tokenize_command(void)
{
int i = 0;
char *delim = " \n", *token = NULL, *cpycommand = NULL;

cpycommand = malloc(sizeof(char) * (strlen(arguments->command) + 1));
strcpy(cpycommand, arguments->command);
arguments->tokencnt = 0;
token = strtok(cpycommand, delim);
while (token)
{
arguments->tokencnt += 1;
token = strtok(NULL, delim);
}

arguments->tokens = malloc(sizeof(char *) * (arguments->tokencnt + 1));
strcpy(cpycommand, arguments->command);
token = strtok(cpycommand, delim);
while (token)
{
arguments->tokens[i] = malloc(sizeof(char) * (strlen(token) + 1));
if (arguments->tokens[i] == NULL)
	malloc_failed();
strcpy(arguments->tokens[i], token);
token = strtok(NULL, delim);
i++;
}
arguments->tokens[i] = NULL;
free(cpycommand);
}
