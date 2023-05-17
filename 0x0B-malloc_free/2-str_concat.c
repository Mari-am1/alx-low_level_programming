#include "main.h"
#include <stdlib.h>

/**
* str_concat - get ends of input and add together for size
* @s1: input one to concat
* @s2: input two to concat
* Return: concat of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
char *conct;
int w, o;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
w = o = 0;
while (s1[w] != '\0')
w++;
while (s2[o] != '\0')
o++;
conct = malloc(sizeof(char) * (w + o + 1));
if (conct == NULL)
return (NULL);
w = o = 0;
while (s1[w] != '\0')
{
conct[w] = s1[w];
w++;
}
while (s2[o] != '\0')
{
conct[w] = s2[o];
w++, o++;
}
conct[w] = '\0';
return (conct);
}
