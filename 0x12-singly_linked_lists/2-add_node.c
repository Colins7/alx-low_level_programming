#include <stdlib.h>
#include <string.h>
#include "lists.h"

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
 * add_node - adds a new node at the beginning of linked list
 * @head: pointer to the head of linked list
 * @str: string to be duplicated and added to the new node
 *
 * Return: address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
if (str == NULL)
return (NULL);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(str);
new_node->next = *head;
*head = new_node;
return (new_node);
}
