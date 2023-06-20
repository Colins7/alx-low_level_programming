#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character ro be checked
 *
 * Return: 1 if @c is alphabetic character, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c <= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
	return (0);
}
