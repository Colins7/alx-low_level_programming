#include "main.h"

/**
 * swap_int - takes two variables integers and swaps them
 * @b: swaps and stores address of a
 * @a: swaps and stores address of b
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int change;

change = *b;
*b = *a;
*a = change;
}
