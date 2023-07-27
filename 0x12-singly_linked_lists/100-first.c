#include "lists.h"
#include <stdio.h>

void print_message_before_main(void) __attribute((constructor));

/**
 * print_message_before_main - print a message before main function is executed
 *
 * Retyurn: void
 */

void print_message_before_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
