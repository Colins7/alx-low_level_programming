#include <stdio.h>
#include "main.h"

/**
 * main - entry point of the code
 *
 * description: prints the numbers from 1-100
 * Fizz for multiples of 3, Buzz for multiples of 5
 * FizzBuzz for multiples of both
 *
 * Return:0
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
if (i != 100)
{
printf(" ");
}
}
puts(" ");
return (0);
}
