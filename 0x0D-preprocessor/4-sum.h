#include <stdio.h>

/**
 * SUM - macro to compute sum of two numbers
 * @x: first number
 * @y: second number
 *
 * Return: sum of 'x' and 'y'
 *
 */

#define SUM(x, y) ((x) + (y))

int main(void)
{
int num1 = 98;
int num2 = 1024;
int result = SUM(num1, num2);
printf("The sum of %d and %d is %d\n". num1, num2, result);
return (0);
}
