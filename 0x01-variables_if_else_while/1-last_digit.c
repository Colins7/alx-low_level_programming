#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - the entry point
*
* Return: (0) success
*/
int main(void)
{
	int n;
	int lastnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (lastnum > 5)
	{
		printf("Last didgit of %d is %d and is greater than 5\n", n, lastnum);
	}
	else if (lastnum == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastnum);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 but not 0\n", n, lastnum);
	}
	return (0);
}
