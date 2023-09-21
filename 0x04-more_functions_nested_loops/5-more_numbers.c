#include "main.h"

/**
* more_numbers - print more numbers
*/

void more_numbers(void)
{
int x, o;

for (x = 1; x <= 10; x++)
{
for (o = 0; o <= 14; o++)


{
if (o >= 10)
_putchar('1');
_putchar (o % 10 + '0');
}


_putchar('\n');
}
}
