#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 *
 * Return: 0
 *
 */
void jack_bauer(void)
{
int h = 0;
int m = 0;
while (h < 24)
{
do {
if (h < 10)
{
_putchar('0');
_putchar(h + '0');
}
else
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
}
_putchar(':');
if (m < 10)
{
_putchar('0');
_putchar(m + '0');
}
else
{
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
}
_putchar('\n');
m++;
} while (m < 60);
h++;
m = 0;
}
}