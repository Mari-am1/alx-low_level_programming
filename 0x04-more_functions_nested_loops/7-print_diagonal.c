#include "main.h"


/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times the character \ should be printed
*/


void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int x, o;

for (x = 0; x < n; x++)
{
for (o = 0; o < n; o++)
{
if (o == x)
_putchar('\\');
else if (o < x)

_putchar(' ');
}
_putchar('\n');
}
}
}
