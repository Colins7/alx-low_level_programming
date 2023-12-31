#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry into the program
 * @argc: number of command lines
 * @argv: array string containing command line arguments
 *
 * Return: 0 success, 1 otherwise
 */

int main(int argc, char *argv[])
{
int amount, coins = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
amount = atoi(argv[1]);
if (amount < 0)
{
printf("0\n");
return (0);
}
while (amount > 0)
{
if (amount >= 25)
amount -= 25;
else if (amount >= 10)
amount -= 25;
else if (amount >= 5)
amount -= 5;
else if (amount >= 2)
amount -= 2;
else
amount -= 1;

coins++;
}
printf("%d\n", coins);
return (0);
}
