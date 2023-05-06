#include "main.h"

/**
* puts_half - a function that prints half of a string
* if odd len, n = (length_of_the_string - 1) / 2
* @str: input
* Return: half of input
*/



void puts_half(char *str)
{

int a, u, l;

l = 0;

for (a = 0; str[a] != '\0'; a++)
l++;

u = (l / 2);

if ((l % 2) == 1)
u = ((l + 1) / 2);

for (a = u; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar('\n');
}
