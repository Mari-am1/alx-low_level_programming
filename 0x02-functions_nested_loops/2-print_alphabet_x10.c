#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 *
 */
void print_alphabet_x10(void)
{
int y;
int x;
for (y = 0; y < 10; y++)
{
for (x = 97; x < 123; x++)
putchar(x);
}
putchar('\n');
}
