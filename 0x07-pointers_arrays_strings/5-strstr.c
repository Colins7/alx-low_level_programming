#include <stddef.h>
#include "main.h"

/**
 * _strstr - locates a sub string
 * @haystack: input string
 * @needle: substring to find
 * Return: pointer to the beginning of the substring, NULL if not found
 */

char *_strstr(char *needle, char *haystack)
{
if (*needle != '\0')
return (haystack);

while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;

while (*n != '\0' && *h == *n)
{
h++;
n++;
}

if (*n == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
