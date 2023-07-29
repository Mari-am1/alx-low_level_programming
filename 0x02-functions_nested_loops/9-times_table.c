#include "main.h"

/**
 * times_table -  function that prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
int y = 0;
int x = 0;
int z = 0;
while (y < 10)
{
do {
z = x * y;
if (z < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(z + '0');
}
else
{
_putchar(' ');
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
}
if (x < 9)
{
_putchar(',');
_putchar(' ');
}
x++;
} while (x != 10);
_putchar('\n');
y++;
x = 0;
}
}
