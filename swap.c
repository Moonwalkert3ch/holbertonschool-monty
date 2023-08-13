#include "monty.h"
/**
 * swap - swaps the top two elements of the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the swap function is called.
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1, *temp2;

	(void) stack;
	if (arguments->stack_len < 2)
	{
		dprintf(2, "L%d: can't swap, stack too short\n", line_number);
		free_all_arguments();
		exit(EXIT_FAILURE);
	}

	temp1 = arguments->head;
	temp2 = temp1->next;
	temp1->next = temp2->next;
	if (temp1->next)
		temp1->next->prev = temp1;
	temp2->next = temp1;
	temp1->prev = temp2;
	temp2->prev = NULL;
	arguments->head = temp2;
}
