#include "main.h"
/**
 * print_most_numbers - function that print the most of the numbers
 *
 */
void print_most_numbers(void)
{
int x;
for (x = 48; x <= 57; x++)
{
if (x < 50 || x == 51 || x > 52)
_putchar(x + '0');
}
_putchar('\n');
}
