#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees dogs
 * @d: address to be freed
 * Return: void
 */
void free_dog(dog_t *d)
{
if (d != 0)
{
free(d->name);
free(d->owner);
free(d);
}
}
