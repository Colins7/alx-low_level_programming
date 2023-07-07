#include <stdio.h>

/**
 * main - entry into the program
 * @argc: number of command line arguments
 * @argv: array string containing command linr arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);

return (0);
}
