#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint - frees the linked list
 * @h: pointer to the head
 *
 */

void free_listint(listint_t *h)
{
listint_t *temp;
while (h)
{
temp = h->next;
free(h);
h = temp;
}
}
