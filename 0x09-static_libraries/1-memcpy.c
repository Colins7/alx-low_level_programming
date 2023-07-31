#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: input string
 * @dest: destinatio pointer
 * @n: number of bytes
 *
 * Return: destination dest
 */

char *_memcpy(char *src, char *dest, unsigned int n)
{
int i;

for (i = 0; i < n; i++)

dest[i] = src[i];
return (dest);
}
