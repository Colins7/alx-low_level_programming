#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a string in memory
 * @str: input string
 *
 * Return: pointer to the newly dulpicated string
 *
 */
char *_strdup(const char *str)
{
char *dup_str;
size_t len, i;
if (str == NULL)
return (NULL);
len = strlen(str);
dup_str = malloc((len + 1) * sizeof(char));
if (dup_str == NULL)
return (NULL);
for (i = 0; i <= len; i++)
dup_str[i] = str[i];
return (dup_str);
}

/**
 * add_node_end - add a new node at the end of list
 * @head: pointer to the head of the linked list
 * @str: the string to duplicate and add to a new node
 *
 * Return: address to new element
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *last_node;
char *dup_str;
size_t len;
if (str == NULL)
return (NULL);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
dup_str = _strdup(str);
if (dup_str == NULL)
{
free(new_node);
return (NULL);
}
len = strlen(str);
new_node->str = dup_str;
new_node->len = len;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
last_node = *head;
while (last_node->next != NULL)
last_node = last_node->next;
last_node->next = new_node;
}
return (new_node);
}
