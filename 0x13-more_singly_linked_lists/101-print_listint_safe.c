#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - print a linled list
 * @h: pointer to the head
 * Return: number of nodes in a list
 */

size_t print_listint_safe(const listint_t *h)
{
const listint_t *slow, *fast;
size_t count = 0;
slow = fast = h;
while (slow && fast && fast->next)
{
printf("[%p] %d\n", (void *)slow, slow->n);
slow = slow->next;
fast = fast->next->next;
count++;
if (slow == fast)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
break;
}
}
return (count);
}
