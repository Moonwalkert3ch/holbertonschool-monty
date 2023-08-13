#include "monty.h"

/**
 * malloc_failed - handles error whn you cant malloc anymore
*/

void malloc_failed(void)
{
dprintf(2, "Error: malloc failed\n");
free_arguments();
exit(EXIT_FAILURE);
}
