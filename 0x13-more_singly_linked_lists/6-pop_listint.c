#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - a function that delets the head node of a list
 * @h: pointer to the heas
 * Return: 0 if empty else a node
 *
 */

int pop_listint(listint_t **h)
{
listint_t *temp;
int ret;
if (*h == NULL)
return (0);
temp = *h;
ret = (*h)->n;
*h = (*h)->next;
free(temp);
return (ret);
}
