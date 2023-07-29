#include "main.h"

/**
 * times_table -  function that prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
int y, x, z = 0;
while (y < 10)
{
do {
z = x * y;
_putchar(z);
_putchar(',');
_putchar(' ');
x++;
} while (x != 10);
_putchar('\n');
y++;
x = 0;
}
}
