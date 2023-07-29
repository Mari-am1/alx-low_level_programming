#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers
 *
 * @n: function parameter
 */

void print_to_98(int n)
{
int x, y;
if (n < 98)
{
for (x = n; x <= 98; x++)
if (x != 98)
printf("%d, ", x);
else
printf("%d", x);
}
else
{
for (y = n; y >= 98; y--)
if (y != 98)
printf("%d, ", y);
else
printf("%d", y);
}
printf("\n");
}
