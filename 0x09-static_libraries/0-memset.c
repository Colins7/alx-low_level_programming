#include "main.h"

/**
 * _memset - sets a block of memory with a specific value
 * @s: input string
 * @b: dsired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;
i = 0;

for (i = 0; i < n; i++)

s[i] = b;
return (s);
}
