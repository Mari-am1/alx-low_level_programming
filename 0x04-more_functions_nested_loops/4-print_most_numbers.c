#include "main.h"

/**
* print_most_numbers - print num except 2 and 4
*
* return: void
*/

void print_most_numbers(void)
{
char e;

for (e = '0'; e <= '9'; e++)
{
if (!(e == '2' || e == '4'))
_putchar(e);
}
_putchar('\n');
}
