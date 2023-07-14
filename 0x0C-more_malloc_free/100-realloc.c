#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: pointer to the previously allocated memory block
 * @old_size: size of the allocated space in bytes
 * @new_size: new sizeof memory block in bytes
 *
 * Return: pointer to the reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
else
return (new_ptr);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
if (new_size < old_size)
memcpy(new_ptr, ptr, new_size);
else
memcpy(new_ptr, ptr, old_size);
free(ptr);
return (new_ptr);
}
