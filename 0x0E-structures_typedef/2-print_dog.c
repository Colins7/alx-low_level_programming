#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: struct data
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", (d->name) ? d->name : "(nil)");
if (d->age)
printf("Age: %f\n", d->age);
else
printf("Age: (nil)\n");
printf("Owner: %s", (d->owner) ? d->owner : "(nil)");
}
}
