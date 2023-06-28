#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an integer
 * @a: the array of integers
 * @n: the number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
int i = 0;

for (i = 0; i < (n - 1); i++)
{
printf("%d", a[i]);
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
