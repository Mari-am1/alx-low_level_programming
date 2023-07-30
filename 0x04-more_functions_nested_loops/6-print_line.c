#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * @n: function parameter
 */
void print_diagonal(int n)
{
if (n > 0)
{
int x, z;
int y = 1;
for (x = 0; x < n; x++)
{
for (z = 0; z < y; z++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
y++;
}
}
_putchar('\n');
}
