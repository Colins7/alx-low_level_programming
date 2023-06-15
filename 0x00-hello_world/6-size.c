#include<stdio.h>
/**
* main - the entry point
*
* Return: (0) success
*/
int main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of an int: %d byte(s)\n", sizeof(int));
	printf("size of a long int: %d byte(S)\n", sizeof (long int));
	printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of a float: %d byte(s)\n", sizeof(float));
	printf("size of a double: %d byte(s)\n", sizeof(double));
	return (0);
}
