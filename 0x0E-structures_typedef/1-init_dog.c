#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to struct variable
 * @name: string to be in name struct  member
 * @age: for the second member
 * @owner: string to be copied into owner (member in the struct)
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if(d != 0)
{
d->name = name;
d->owner = owner;
d->age = age;
}
}
