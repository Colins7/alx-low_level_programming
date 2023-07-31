#include <stddef.h>
#include "main.h"
/**
* _strstr - Locates a substring within a string.
* @haystack: The string to search within.
* @needle: The substring to find.
*
* Return: A pointer to the beginning of the located substring,
*         or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j] == '\0')
return (haystack + i);
}
return (NULL);
}
