#include "monty.h"

/**
 * free_stack - frees nodes in stack
 * @head: first node in list
 * Return: nothing
*/

void free_stack(stack_t *head)
{
if (head == NULL)
	return;

if (head->next != NULL)
{
free_stack(head->next);
}
free(head);
}
