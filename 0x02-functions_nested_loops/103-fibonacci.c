#include <stdio.h>

/**
* main - finds and prints the sum of the even-valued terms
* followed by a new line
* Return: Always 0 (Success)
*/

int main(void)
{
int m;
unsigned long int h, f, next, sum;

h = 1;
f = 2;
sum = 0;
for (m = 1; m <= 33; ++m)
{
if (h < 4000000 && (h % 2) == 0)
{
sum = sum + h;
}
next = h + f;
h = f;
f = next;
}
printf("%lu\n", sum);
return (0);
}
