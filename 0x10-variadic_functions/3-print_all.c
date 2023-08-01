#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format.
 * @format: The format string containing the types of arguments.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char c_arg;
int i_arg;
float f_arg;
char *s_arg;

va_start(args, format);

while (format && format[i])
{
if (format[i] == 'c')
{
c_arg = va_arg(args, int);
printf("%c", c_arg);
}
else if (format[i] == 'i')
{
i_arg = va_arg(args, int);
printf("%d", i_arg);
}
else if (format[i] == 'f')
{
f_arg = va_arg(args, double);
printf("%f", f_arg);
}
else if (format[i] == 's')
{
s_arg = va_arg(args, char *);
if (s_arg == NULL)
printf("(nil)");
else
printf("%s", s_arg);
}
if (format[i + 1] != '\0' &&
(format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
printf(", ");
i++;
}
va_end(args);
printf("\n");
}
