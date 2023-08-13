#include "monty.h"

/**
 * get_content_failed - handles error if it’s not possible to open the file
 * @fileName: Name of file that wont open
*/

void get_content_failed(char *fileName)
{
dprintf(2, "Error: Can't open file %s\n", fileName);
free_arguments();
exit(EXIT_FAILURE);
}
/**
 * get_content - gets content from file
 * @fileName: Name of file to open and read
*/

void get_content(char *fileName)
{
int fd;

fd = open(fileName, O_RDONLY);
if (fd == -1)
	get_content_failed(fileName);
arguments->content = fdopen(fd, "r");
if (arguments->content == NULL)
{
close(fd);
get_content_failed(fileName);
}
}
/**
 * close_content - closes file and sets it to null
*/

void close_content(void)
{
if (arguments->content == NULL)
	return;
fclose(arguments->content);
arguments->content = NULL;
}
