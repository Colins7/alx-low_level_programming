#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: the input string
 * @c: character to be located
 * Return: @c in string @s, if not NULL
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);

return (NULL);
}
