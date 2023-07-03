#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: pointer to the destination memory area
 * @src: the input string
 * @n: the number of bytes to copy
 * Return: @dest, pointer to the destination memory area
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
