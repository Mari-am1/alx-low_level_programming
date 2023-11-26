#include "dog.h"
#include <stdlib.h>
int length(char *c);
char *_strcpy(char *a, char *b);
/**
 * new_dog - function that store a copy of name and owner
 * @name: name to be copied in heap
 * @age: age of the dog
 * @owner: the owner name to be copied in heap
 * Return: a pointer to struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int len = 0;
dog_t *ptr = (dog_t *)malloc(sizeof(dog_t));
if (ptr == 0)
return ('\0');
len = length(name);
ptr->name = (char *)malloc(sizeof(len));
if (ptr->name == 0)
{
free(ptr->name);
return ('\0');
}
_strcpy(ptr->name, name);
len = length(owner);
ptr->owner = (char *)malloc(sizeof(len));
if (ptr->owner == 0)
{
free(ptr->name);
free(ptr);
return ('\0');
}
_strcpy(ptr->owner, owner);
ptr->age = age;
return (ptr);
}
/**
 * _strcpy - copy b into a
 * @a: first parameter
 * @b: the second
 * Return: void
 */
char *_strcpy(char *a, char *b)
{
int i = 0, m = 0;
while (b[i] != '\0')
{
a[i] = b[i];
i++;
m = i;
}
a[m] = '\0';
return (a);
}
/**
 * length - calculate the length of the string
 * @c: string
 * Return: integer
 */
int length(char *c)
{
int i = 0, j = 0;
while (c[i] != '\0')
{
i++;
j = i + 1;
}
return (j);
}
