#include <stdbool.h>

/**
 * str_length - returns the length of a string
 * @s: the input string
 *
 * Return: length of string
 *
 */

int str_length(char *s)
{
if (*s == '\0')
return (0);

return (1 + str_length(s + 1));
}

/**
 * compare_chars - compares characters for a palindrome check recursively
 * @start: pointer to the start of a string
 * @end: pointer to the end of string
 *
 * Return: 1 if palindrome, 0 if otherwise
 *
 */

int compare_chars(char *start, char *end)
{
if (start >= end)
return (1);
if (*start != *end)
return (0);

return (compare_chars(start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: the iput string
 *
 * Return: 1 if palindrome, 0 otherwise
 *
 */

int is_palindrome(char *s)
{
int len = str_length(s);

return (compare_chars(s, s + len - 1));
}
