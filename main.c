#include "monty.h"

arg_t *arguments = NULL;

/**
 * main - Entry point
 * @argc: the number of command arguments
 * @argv: a pointer to an array of strings of command args
 * Description: runs the bytecodes line by line
 * Return: returns 0 on success
*/

int main(int argc, char **argv)
{
size_t n = 0;

check_arguments(argc);
set_arguments();
get_content(argv[1]);

while (getline(&arguments->command, &n, arguments->content) != -1)
{
arguments->line_number += 1;
tokenize_command();
get_opcodefunc();
run_opcodefunc();
free_tokens();
}

close_content();
free_arguments();

return (0);
}
