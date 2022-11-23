#include "monty.h"

/**
 * main - Main Function
 * @argcount: how many args
 * @argcont: contents of arg
 * Return: int
 */

int main(int argcount, char *argcont[])
{

FILE file;
char *buffer, *buff, *spaced;
char check[4];
size_t size;
const char del[] = " \t\n";
int count = 0;
int linecount = 0;
stack_t stack;
instruction_t op[] = {{"push", push}, {"pall", pall}};

if (argcount != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
file = fopen(argcont[1], r);
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

spaced = strtok(buff, del);

check[count] = spaced;

linecount++;

while (spaced != null && count < 3)
{
spaced = strtok(NULL, del);
count++;
check[count] = spaced;
}

for (i = 0; i < 2; i++)
{

if (strcmp(op.opcode, check) == 0)
{
op[i].f(stack, linecount);
}
}
}

fclose(file);

return (0);
}
