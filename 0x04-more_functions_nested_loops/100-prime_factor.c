#include <stdio.h>
#include <math.h>

/**
* main - finds and prints the largest prime factor of the number 612852475143
* followed by a new line
* Return: Always 0 (Success)
*/

int main(void)
{
long int n;
long int max;
long int o;

n = 612852475143;
max = -1;

while (n % 2 == 0)
{
max = 2;
n /= 2;
}

for (o = 3; o <= sqrt(n); o = o + 2)
{
while (n % o == 0)
{
max = o;
n = n / o;
}
}
if (n > 2)
max = n;

printf("%ld\n", max);
return (0);
}
