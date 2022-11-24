#include "monty.h"

checker *c;

/**
 * other - function
 * @op: struct
 * @linecount: var
 * @ch: var
 * @stack: var
 * Return: void
 */

void other(instruction_t op, unsigned int linecount, char *ch, stack_t **stack)
{
for (i = 0; i < 7; i++)
{
if (strcmp(op[i].opcode, ch) == 0)
{
op[i].f(stack, linecount);
return;
}
}
fprintf(stderr, "L%d: unknown instruction %s\n", linecount, ch);
freemem(stack);
exit(EXIT_FAILURE);
}
