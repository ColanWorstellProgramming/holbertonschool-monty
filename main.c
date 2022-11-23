#include "monty.h"

char *check2;

/**
 * main - Main Function
 * @argcount: how many args
 * @argcont: contents of arg
 * Return: int
 */

int main(int argcount, char *argcont[])
{

FILE *file;
char *buffer, *buff;
char *check;
size_t size;
const char del[] = " \t\n";
unsigned int i;
int linecount = 0;
stack_t **stack = NULL;
instruction_t op[] = {{"push", push}, {"pall", pall}};

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
buffer = malloc(sizeof(char) * 2);
if (buffer == NULL)
{
fprintf(stderr, "ERROR: memory failure");
exit(EXIT_FAILURE);
}
while(getline(&buff, &size, file) != -1)
{

check = strtok(buff, del);
check2 = strtok(NULL, del);
linecount++;

}

for (i = 0; i < 2; i++)
{

if (strcmp(op[i].opcode, check) == 0)
{
op[i].f(stack, linecount);
}
}

fclose(file);
return (0);
}
