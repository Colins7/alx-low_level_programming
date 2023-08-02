#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @h: pointer to the head
 * @index: node
 * Return: NULL
 */

listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)
{
unsigned int node;
for (node = 0; node < index; node++)
{
if (h == NULL)
return (NULL);
h = h->next;
}
return (h);
}
