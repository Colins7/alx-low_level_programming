#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the input string
 * @accept: the string containing bytes to search for
 * Return: ponter to the byte in @s that matches in @accept, NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
return (s);
a++;
}
s++;
}
return (NULL);
}
