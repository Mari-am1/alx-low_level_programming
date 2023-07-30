#include <stdio.h>

/**
* main - prints all possible combinations of two two-digit numbers
* Return: 0 (Success)
*/
int main(void)
{
int m, h;

for (m = 0; m < 100; m++)
{
for (h = 0; h < 100; h++)
{
if (m < h)
{
putchar((m / 10) + 48);
putchar((m % 10) + 48);
putchar(' ');
putchar((h / 10) + 48);
putchar((h % 10) + 48);
if (m != 98 || h != 99)
{
putchar(',');
putchar(' ');
}
}

}
}
putchar('\n');
return (0);
}
