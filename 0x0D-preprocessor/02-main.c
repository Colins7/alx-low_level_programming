#include <stdio.h>
/**
 * main - entry point in the program
 *
 * It uses the predefined macro __FILE__  to retrieve the file
 * Return: 0 success
 *
 */

int main(void)
{
printf("Compiled from file: %s\n", __FILE__);
return (0);
}
