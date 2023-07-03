#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: string of accepted characters
 * Return: the number of bytes in @s consisting only of bytes from 'accept'
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int segmentlength = 0;
int i = 0;
while (*s != '\0')
{
int j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
segmentlength++;
break;
}
j++;
}
if (accept[j] == '\0')
break;
i++;
}
return (segmentlength);
}
