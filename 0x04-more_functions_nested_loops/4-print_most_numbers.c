#include "main.h"
/**
 * print_most_numbers - function that print the most of the numbers
 *
 */
void print_most_numbers(void)
{
int x;
for (x = 0; x < 10; x++)
{
if (x < 2 || x == 3 || x > 4)
_putchar(x + '0');
}
}
