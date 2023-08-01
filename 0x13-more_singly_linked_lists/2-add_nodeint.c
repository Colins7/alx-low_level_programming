#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint -adds a new node at the beginning of a listint_t ;list
 * @h: pointer to the head of the list
 * @n: integer value to be stored in the new node
 *
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **h, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = *h;
*h = new_node;
return (new_node);
}
