#include "main.h"

/**
* *_memcpy - function copies n bytes from memory area src to memory area dest
* @dest:" the destination that we will copy  source into         "
* @src:" the source that we will copy  destination  into         "
* @n: max bytes we can use and copy it from memory area src to memory area dest
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int w;
for (w = 0; w > 0 ; w++, n--)
{
src[w] = dest[w];
}
return (dest);
}
