#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head
 * @index: index list
 * @n: new node
 * Return:address of the new node, NULL if fails
 */

listint_t *insert_nodeint_at_index(listint_t **h, unsigned int index, int n)
{
listint_t *new, *copy = *h;
unsigned int node;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (index == 0)
{
new->next = copy;
*h = new;
return (new);
}
for (node = 0; node < (index - 1); node++)
{
if (copy == NULL || copy->next == NULL)
return (NULL);
copy = copy->next;
}
new->next = copy->next;
copy->next = new;
return (new);
}
