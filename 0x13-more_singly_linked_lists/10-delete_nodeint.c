#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delets a node at the index of a list
 * @h: pointer to the head
 * @index: node to delete
 * Return: 1 on success, else -1
 */

int delete_nodeint_at_index(listint_t **h, unsigned int index)
{
listint_t *temp, *copy = *h;
unsigned int node;
if (copy == NULL)
return (-1);
if (index == 0)
{
*h = (*h)->next;
free(copy);
return (1);
}
for (node = 0; node < (index - 1); node++)
{
if (copy->next == NULL)
return (-1);
copy = copy->next;
}
temp = copy->next;
copy->next = temp->next;
free(temp);
return (1);
}
