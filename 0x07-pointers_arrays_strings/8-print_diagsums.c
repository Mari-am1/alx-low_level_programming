#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Prints the sum of the two diagonals
* of a square matrix of integers.
* @a: The matrix of integers.
* @size: The size of the matrix.
*/

void print_diagsums(int *a, int size)
{
int m, x = 0, o = 0;
for (m = 0; m < size; m++)
{
x += a[m];
a += size;
}
a -= size;
for (m = 0; m < size; m++)
{
o += a[m];
a -= size;
}
printf("%d, %d\n", x, o);
}

