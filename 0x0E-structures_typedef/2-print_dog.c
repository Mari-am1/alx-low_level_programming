#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog
 * @d: pointer to variable in the struct
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d != 0)
{
if (d->name == 0)
d->name = "(nil)";
if (d->owner == 0)
d->owner = "(nil)";
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
}
