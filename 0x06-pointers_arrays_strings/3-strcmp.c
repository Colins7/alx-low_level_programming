#include "main.h"

/**
 * _strcmp - compares two strings
 *@s1: the first string to compare
 *@s2: the second string to compare
 *Return: comparison result
 */

int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}
return (s1[i] - s2[i]);
}
