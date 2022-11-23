#include "monty.h"

/**
 * push - push element
 * @stack: stack
 * @i: line num
 * Return: void
 */
void push(stack_t **stack, unsigned int i)
{

stack_t *adding;
int x;

if (check2 == NULL)
{
fprintf(stderr, "L%d: usage: push integer\n", i);
exit(EXIT_FAILURE);
}

x = atoi(check2);

adding = malloc(sizeof(stack_t));

adding->n = x;
adding->prev = NULL;
adding->next = *stack;


if (*stack)
{
(*stack)->prev = adding;
}

(*stack) = adding;

(void) i;
}

/**
 * pall - print all elements
 * @stack: stack
 * @i: line num
 * Return: void
 */
void pall(stack_t **stack, unsigned int i)
{

stack_t *temp = *stack;

while (temp)
{
printf("%d\n", temp->n);
temp = temp->next;
}
(void) i;
}

/**
 * pint - print top element
 * @stack: stack
 * @i: line num
 * Return: void
 */
void pint(stack_t **stack, unsigned int i)
{

if ((*stack) == NULL)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", i);
exit(EXIT_FAILURE);
}
else
{
printf("%d\n", (*stack)->n);
}
}

/**
 * pop -  removes top element
 * @stack: stack
 * @i: line num
 * Return: void
 */
void pop(stack_t **stack, unsigned int i)
{
stack_t *new;

if (!(*stack))
{
fprintf(stderr, "L%d: can't pop an empty stack\n", i);
exit(EXIT_FAILURE);
}
else
{
new = (*stack)->next;
free((*stack));
(*stack) = new;
}
}

/**
 * nop - does nothing
 * @stack: stack
 * @i: line num
 * @Return: void
 */
void nop(stack_t **stack, unsigned int i)
{
(void) stack;
(void) i;
}
