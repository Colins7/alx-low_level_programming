#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print anything based on format
 * @format: format string containing types of arguments
 *
 * Return: void
 *
 */

void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *s_arg;

va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c' :
{
int c_arg = va_arg(args, int);
printf("%c", c_arg);
break;
}
case 'i' :
{
int i_arg = va_arg(args, int);
printf("%i", i_arg);
break;
}
case 'f' :
{
double f_arg = va_arg(args, double);
printf("%f", f_arg);
break;
}
case 's' :
{
s_arg = va_arg(args, char *);
if (s_arg == NULL)
printf("nil)");
else
printf("%s", s_arg);
break;
default:
break;
}
if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f') format[i] == 's')
printf(",");
i++;
}
va_end(args);
printf("\n");
}
