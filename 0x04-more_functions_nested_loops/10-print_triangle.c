#include "main.h"
/**
 * print_triangle - function that prints a triangle
 *
 * @size: function parameter
 */
void print_triangle(int size)
{
int x, z, r;
int i = 1;
int y = (size - 1);
if (size > 0)
{
for (x = 0; x < size; x++)
{
for (z = 0; z < y; z++)
_putchar(' ');
for (r = 0; r < i; r++)
_putchar('#');
_putchar('\n');
y--;
i++;
}
}
else
_putchar('\n');
}
