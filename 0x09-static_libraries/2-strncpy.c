#include "main.h"

/**
 * _strncpy - copy a maximum n bytes from a string
 *@src: input string
 *@dest: destination string
 *@n: input value
 * Return: dest
 */

char *_strncpy(char *src, char *dest, int n)
{
int j;
j = 0;

while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
