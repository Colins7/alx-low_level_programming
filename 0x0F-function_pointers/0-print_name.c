#include <stddef.h>

/**
 * print_name - print name using pointer to a function
 * @name: string to add
 * @f: pointer to function
 *
 * Return: void
 *
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}