#include "monty.h"

/**
 * Global Var
 */

checker *c;

/**
 * freemem - free mem
 * @stack: stack
 * Return: void
 */

void freemem(stack_t **stack)
{

stack_t *new;

free(c->check1);
free(c->check2);
free(c);

if (*stack)
{
while (*stack)
{
new = (*stack)->next;
free(*stack);
(*stack) = new;
}
}
}
