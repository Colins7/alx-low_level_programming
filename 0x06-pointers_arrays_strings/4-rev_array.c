#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: pointer to the array
 * @n: number of elements in array
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
int i;
int change;

for (i = 0; i < n / 2; i++)
{
change = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = change;
}
}
