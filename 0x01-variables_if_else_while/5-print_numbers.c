#include <stdio.h>
/**
* main - all single digit numbers , print
*
* Return: (0) success
*
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%d, digit\n", digit);
		++digit;
	}
	printf("\n");
	return (0);
}
