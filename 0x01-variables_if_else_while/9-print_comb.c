#include <stdio.h>
int main(void)
{
int n = 0;
while (n < 10)
{
putchar(n + '0');
n++;
if (n <= 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
