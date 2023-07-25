#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings folowed by a new line
 * @separator: the string to be printed between strings
 * @n: number of strings passed tto the function
 * @...: variable number of strings to be printed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
const char *str;

va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, const char *);
if (str != NULL)
printf("%s", str);
else
printf("(nil)");
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
