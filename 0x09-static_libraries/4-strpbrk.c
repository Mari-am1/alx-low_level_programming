#include "main.h"

/**
* _strpbrk - Function that searches a string for any of a set of bytes.
* @s: The string that we swarch about
* @accept: The set of bytes to be  searched for.
* Return: If a set is matched - a pointer to the matched byte.
* If no set is matched - NULL.
*/
char *_strpbrk(char *s, char *accept)
{
int w;
while (*s)
{
for (w = 0; accept[w]; w++)
{
if (*s == accept[w])
return (s);
}
s++;
}
return ('\0');
}
