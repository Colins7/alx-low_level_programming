#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the input string
 * Return: string in reverse
 */

void rev_string(char *s)
{
int length = 0;
int start, end;
int change;

while (s[length] != '\0')
{
length++;
}
start = 0;
end = length - 1;

while (start < end)
{
change = s[start];
s[start] = s[end];
s[end] = change;
start++;
end--;
}
}
