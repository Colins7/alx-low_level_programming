#include "main.h"

/**
 * _strchr - concatenates two strings with a maximum limit
 * @s: pointer to the destination string
 * @c: pointer to the input string
 *
 * Return: pointer to the destination dest
 */

char *_strchr(char *s, char c)
{
int i = 0;

for (i = 0; c[i] >= '\0'; i++)
{
if (c[i] == s)
return (&c[i]);
}
return (0);
}
