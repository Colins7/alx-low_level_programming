#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - print the results of simple operation
 * @argc: number of arguments supplied ti the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0
 */

int main(int_attribute_((_unused_))argc, char *argv[])
{
int num1, num2;
char *op;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1
