#include "main.h"

/**
 * print_rev - prints a string in revers
 * @s: the input string to be pointed
 * Return: the length of the string
 */

void print_rev(char *s)
{
int length = 0;
int i = 0;

while (s[length] != '\0')
{
length++;
}

i = length - 1;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
