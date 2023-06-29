#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: the input string
 * @dest: pointer to the destination string
 * Return: pointer to the destination dest
 */

char *_strcat(char *dest, char *src)
{
char *change = dest;

while (*change)
{
change++;
}
while (*src)
{
*change = *src;
change++;
src++;
}
*change = '\0';
return (dest);
}
