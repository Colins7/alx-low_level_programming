#include "main.h"
#include "_putvhar.h"


/**
 * print_most_numbers - 01356789, print
 *
 * Return:void
 */

int print_most_numbers(void)
{
char c;

for (c = 0; c <= 9; c++)
{
if (!(c == '2' || c == '4'))
_putchar(c);
}
_putchar('\n');
}
