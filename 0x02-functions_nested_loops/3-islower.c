#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - check if the character is lowercase or not.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
int r;
r = _islower('H');
putchar(r + '0');
r = _islower('o');
putchar(r + '0');
r = _islower(108);
putchar(r + '0');
putchar('\n');
return (0);
}
