#include <stddef.h>
#include "lists.h"

/**
 * listint_len - returnd the number of elements in list
 * @h: pointer to the head of the list
 *
 * Return: number of elemnts in list
 */

size_t listint_len(const listint_t *h)
{
size_t node_count = 0;
while (h != NULL)
{
node_count++;
h = h->next;
}
return (node_count);
}
