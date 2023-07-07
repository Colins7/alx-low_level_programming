#include <stdio.h>

/**
 * main - entry into the program
 * @argc: the number of command lines
 * @argv: array of string containing command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void)argv;

printf("%d\n", argc - 1);

return (0);
}
