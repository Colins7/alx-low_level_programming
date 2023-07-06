#include <stdbool.h>

/**
 * wildcmp - compares two strings allowing special character *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '\0')
return (1);

if (*s1 != '\0' && wildcmp(s1 + 1, s2))
return (1);

return (wildcmp(s1, s2 + 1));
}
if (*s1 == *s2)
{
if (*s1 == '\0')
return (1);

return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
