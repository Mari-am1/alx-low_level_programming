#include<stdlib.h>
#include"main.h"
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: array element
 * @size: the size of the elements
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *s;
if (nmemb == 0 || size == 0)
return (NULL);
s = malloc(size * nmemb);
if (s == 0)
return (NULL);
for (i = 0; i < nmemb; i++)
s[i] = 0;
return ((void *)s);
}
