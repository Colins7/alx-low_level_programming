#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns sum of all data in a list
 * @h: pointer to the head
 * Return: 0 if list empty, else return sum
 */

int sum_listint(listint_t *h)
{
int sum = 0;
while (h)
{
sum += h->n;
h = h->next;
}
return (sum);
}
