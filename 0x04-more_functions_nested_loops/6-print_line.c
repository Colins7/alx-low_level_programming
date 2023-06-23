#include "main.h"

/**
 * print_line - straight line 'n' times
 *@n: the number of times the line is printed
 * Return: (0)
 *
 */

void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
