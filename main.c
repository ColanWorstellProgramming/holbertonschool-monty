#include "monty.h"

checker check;

/**
 * main - Main Function
 * @argcount: how many args
 * @argcont: contents of arg
 * Return: int
 */

int main(int argcount, char *argcont[])
{

FILE *file = NULL;
char *buff = NULL;
size_t size;
const char del[] = " \t\n";
unsigned int i;
int linecount = 0;
checker->check1 = NULL;
checker->check2 = NULL;
stack_t *stack = NULL;
instruction_t op[] = {{"push", push}, {"pall", pall}, {"pint", pint}, {"pop", pop}, {"swap", swap}, {"add", add}, {"nop", nop}};

if (argcount != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
file = fopen(argcont[1], "r");
if(file == NULL)
{
fprintf(stderr, "ERROR: no file");
exit(EXIT_FAILURE);
}

while(getline(&buff, &size, file) != -1)
{

check = strtok(buff, del);
check2 = strtok(NULL, del);
linecount++;

for (i = 0; i < 7; i++)
{

if (strcmp(op[i].opcode, check) == 0)
{
op[i].f(&stack, linecount);
continue;
}
}
}

free(check);
free(check2);
freemem(&stack);
fclose(file);
return (0);
}
