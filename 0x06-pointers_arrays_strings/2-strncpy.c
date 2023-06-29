#include "main.h"

/**
 * _strncpy - copies a string
 * @src: the input string
 * @dest: the pointer to the destination
 * @n: the number of bytes to copy from src
 * Return: the destination dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for (; i < n; i++)
dest[i] = '\0';
return (dest);
}
