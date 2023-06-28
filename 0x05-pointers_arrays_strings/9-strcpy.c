#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @src: the string input
 * @dest: pointer destination
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
char *ptr = dest;

while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (ptr);
}
