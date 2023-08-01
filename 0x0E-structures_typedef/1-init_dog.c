#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize variable for a structure
 * @d: the structure
 * @name: member1
 * @age: member2
 * @owner: member3
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
