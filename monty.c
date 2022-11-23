#include "monty.h"

/**
 * push - push element
 * @stack: stack
 * @i: line num
 * Return: void
 */

void push(stack_t **stack, unsigned int i)
{

stack_t (*new) = *stack;
stack_t *adding = NULL;

int x = atoi(check2);

adding->n = x;
adding->prev = new;
adding->next = NULL;

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

stack_t (*new) = *stack;

while (new)
{
printf("%d", new->n);
new = new->next;
}
(void) i;
}
