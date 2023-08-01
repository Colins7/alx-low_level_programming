#include <stdio.h>
#include "lists.h"

/**
 * print_listint  - print all ellements of lists_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 *
 */

size_t print_listint(const listint_t *h)
{
size_t node_count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
node_count++;
h = h->next;
}
return (node_count);
}
