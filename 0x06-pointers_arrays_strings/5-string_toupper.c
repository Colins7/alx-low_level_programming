#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase leters
 * @str: the string to convert
 * Return: uppercase letters
 */

char *string_toupper(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - ('a' - 'A');
}
}
return (str);
}

