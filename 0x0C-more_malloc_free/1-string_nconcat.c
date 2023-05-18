#include <stdlib.h>
#include "main.h"

/**
* *string_nconcat - concatenates n bytes of a string to another string
* @s1: string to append to
* @s2: string to concatenate from
* @n: number of bytes from s2 to concatenate to s1
* Return: pointer to the resulting string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int m = 0, h = 0, x = 0, y = 0;
while (s1 && s1[x])
x++;
while (s2 && s2[y])
y++;

if (n < y)
s = malloc(sizeof(char) * (x + n + 1));
else
s = malloc(sizeof(char) * (x + y + 1));

if (!s)
return (NULL);
while (m < x)
{
s[m] = s1[m];
m++;
}
while (n < y && m < (x + n))
s[m++] = s2[h++];
while (n >= y && m < (x + y))
s[m++] = s2[h++];
s[m] = '\0';
return (s);
}
