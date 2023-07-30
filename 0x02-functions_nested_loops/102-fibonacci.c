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
int counter = 2;
unsigned long int z;
printf("%lu, ", x);
printf("%lu, ", y);
do {
z = x + y;
x = y;
y = z;
if (counter != 49)
printf("%lu, ", y);
else
printf("%lu", y);
counter++;
} while (counter != 50);
printf("\n");
}
