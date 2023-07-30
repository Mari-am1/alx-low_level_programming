#include "main.h"
#include <stdio.h>
/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: ();
 */
void main(void)
{
unsigned long int x = 1;
unsigned long int y = 2;
unsigned long int z;
unsigned long int sum = 2;
do {
z = x + y;
x = y;
y = z;
if ((y % 2) == 0)
sum = sum + y;
} while (y < 4000000);
printf("%lu\n", sum);
}
