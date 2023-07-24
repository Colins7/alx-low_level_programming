#include <stdio.h>
#include <stdlib.h>

/**
 * main - print its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 *
 */

int main(int argc, char *argv[])
{
int i;
int num_bytes;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
exit(2);
}
unsigned char *main_ptr = (unsigned char *)main;
for (i = 0; i < num_bytes; i++)
printf("%02x ", main_ptr[i]);
printf("\n");
return (0);
}
