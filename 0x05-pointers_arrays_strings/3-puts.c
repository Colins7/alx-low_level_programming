#include "main.h"

/**
 * _puts - function that a string
 * @str: serves as the input string
 * Return: string and a new line
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
