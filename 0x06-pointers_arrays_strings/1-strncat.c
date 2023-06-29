#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: the input string
 * @dest: pointer to the destination  string
 * @n: the number of bytes fromsrc to concatenate
 * Return: pointer to the dest destination
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int dest_len = 0;

while (dest[dest_len] != '\0')
dest_len++;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len++] = src[i];

dest[dest_len] = '\0';
return (dest);
}
