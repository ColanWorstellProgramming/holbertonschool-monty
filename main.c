#include "monty.h"

/**
 * Global Var
 */

checker *c;

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
int linecount = 0;
stack_t *stack = NULL;

c = malloc(sizeof(checker));

if (argcount != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
file = fopen(argcont[1], "r");
if(file == NULL)
{
fprintf(stderr, "ERROR: no file\n");
exit(EXIT_FAILURE);
}

while(getline(&buff, &size, file) != -1)
{

c->check1 = strtok(buff, del);
c->check2 = strtok(NULL, del);
linecount++;

other(linecount, c->check1, &stack);

}

freemem(&stack);
fclose(file);
return (0);
}
