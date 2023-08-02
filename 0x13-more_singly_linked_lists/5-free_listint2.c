#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @h: pointer to the head
 *
 * Return: void
 *
 */

void free_listint2(listint_t **h)
{
listint_t *current = *h;
listint_t *next;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
*h = NULL;
}
