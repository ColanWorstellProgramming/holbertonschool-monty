#include "monty.h"

/**
 * freemem - free mem
 * @stack: stack
 * Return: void
 */

void freemem(stack_t **stack)
{
if (stack == NULL || *stack == NULL)
{
return;
}

freemem(&((*stack)->next));
free(*stack);
*stack = NULL;
}
