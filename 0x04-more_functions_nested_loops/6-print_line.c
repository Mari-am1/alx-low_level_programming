#include "main.h"
/**
 * print_line - function that draws a straight line
 *
 * @n: function parameter
 */
void print_line(int n)
{
if (n > 0)
{
int x;
for (x = 0; x < n; x++)
_putchar('_');
}
_putchar('\n');
}
