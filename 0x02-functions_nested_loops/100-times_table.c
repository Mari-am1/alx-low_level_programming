#include "main.h"
/**
 * print_times_table - function that prints the n times table
 * @n: time function parameter
 * space - print space
 * @sp: space parameter functio
 */
void space(int sp);
void print_times_table(int n)
{
int x = 0;
int y = 0;
int z = 0;
while (x <= n)
{
if (n < 0 || n > 15)
break;
for (y = 0; y <= n; y++)
{
z = x * y;
if (z < 10)
{
_putchar(z + '0');
if (y != n)
space(3);
else
_putchar('\n');
}
else if (z >= 10 && z < 100)
{
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
if (y != n)
space(2);
else
_putchar('\n');
}
else if (z >= 100 && z < 1000)
{
_putchar((z / 100) + '0');
_putchar(((z % 10) % 10) + '0');
_putchar((z % 10) + '0');
if (y != n)
space(1);
else
_putchar('\n');
}
}
y = 0;
x++;
}
_putchar('\n');
}
void space(int sp)
{
int i;
_putchar(',');
for (i = 0; i < sp; i++)
_putchar(' ');
}
