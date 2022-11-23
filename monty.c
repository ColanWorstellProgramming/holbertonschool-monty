#include "monty.h"

/**
 * 
 */

void push(stack_t **stack, unsigned int i)
{

int val = atoi(i);

if (val = 0 || i == NULL)
{
fprintf(stderr, "L<%d>: usage: push integer\n", __LINE__);
exit(EXIT_FAILURE);
}

}

/**
 *
 */

void pall(stack_t **stack, unsigned int i)
{

stack_t (*new) = *stack;

while (new)
{
printf("%d", new->n);
new = new->next;
}
(void) i;
}
