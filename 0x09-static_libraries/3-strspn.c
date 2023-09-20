#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
* @s: The string that we searched about
* @accept: The prefix that we will measure.
* Return: The number of n   bytes         .
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes = 0;
int w;
while (*s)
{
for (w = 0; accept[w]; w++)
{
if (*s == accept[w])
{
bytes++;
break;
}
else if (accept[w + 1] == '\0')
return (bytes);
}
s++;
}
return (bytes);
}
