#include "main.h"

/**
 * puts_half - prints half a string
 * @str: the input string
 * Return: half the string
 */

void puts_half(char *str)
{
int length = 0;
int start, i;

while (str[length] != '\0')
{
length++;
}
start = length / 2;
if (length % 2 != 0)
{
start += 1;
}
for (i = start; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
