#include "monty.h"

/**
 * push - pushes an element to the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the push function is called.
*/
void push(stack_t **stack, unsigned int line_number)
{
	if (arguments->tokencnt <= 1 || !(check_num(arguments->tokens[1])))
	{
		free_arguments();
		dprintf(2, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
		malloc_failed();
	(*stack)->next = (*stack)->prev = NULL;
	(*stack)->n = (int) atoi(arguments->tokens[1]);
	if (arguments->head == NULL)
		arguments->head = *stack;
	else
	{
		if (arguments->stack)
		{
			(*stack)->next = arguments->head;
			arguments->head->prev = *stack;
			arguments->head = *stack;
		}
		else
		{
			stack_t *temp = arguments->head;

			while (temp->next)
				temp = temp->next;
			temp->next = *stack;
			(*stack)->prev = temp;
		}
	}
	arguments->stack_len += 1;
}
