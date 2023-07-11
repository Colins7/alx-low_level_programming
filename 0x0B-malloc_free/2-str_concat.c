#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to the concatenated string, NULL if failure
 */

char *str_concat(char *s1, char *s2)
{
char *concat;
size_t s1_len, s2_len;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

s1_len = strlen(s1);
s2_len = strlen(s2);

concat = malloc(sizeof(char) * (s1_len + s2_len + 1));
if (concat == NULL)
return (NULL);

strcpy(concat, s1);
strcat(concat, s2);

return (concat);
}
