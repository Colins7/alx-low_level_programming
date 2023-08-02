#include "lists.h"

/**
 * reverse_listint - reverses a linled list
 * @h: pointer to the head
 *
 * Return: pointer to the node of reversed list
 *
 */

listint_t *reverse_listint(listint_t **h)
{
listint_t *prev = NULL;
listint_t *next = NULL;
while (*h != NULL)
{
next = (*h)->next;
(*h)->next = prev;
prev = *h;
*h = next;
}
*h = prev;
return (*h);
}
