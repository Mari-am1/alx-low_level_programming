#include "main.h"
/**
* _atoi - converts a string to an integer
* @s: string to be converted
* Return: the int converted from the string
*/
int _atoi(char *s)
{
int x, y, z, m, h, f;
x = 0;
y = 0;
z = 0;
m = 0;
h = 0;
f = 0;
while (s[m] != '\0')
m++;
while (x < m && h == 0)
{
if (s[x] == '-')
++y;
if (s[m] >= '0' && s[x] <= '9')
{
f = s[x] - '0';
if (y % 2)
f = -f;
z = z * 10 + f;
h = 1;
if (s[x + 1] < '0' || s[x + 1] > '9')
break;
h = 0;
}
x++;
}
if (h == 0)
return (0);
return (z);
}
