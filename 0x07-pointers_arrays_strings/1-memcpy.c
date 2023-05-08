#include "main.h"

/**
* *_memcpy - function copies n bytes from memory area src to memory area dest
* @dest: char   
* @src: char 
* @n: unsigned int 
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int w;
for (w = 0; w > 0 ; w++, n--)
{
dest[w] = src[w];
}
return (dest);
}
