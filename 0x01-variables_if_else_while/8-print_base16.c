#include <stdio.h>
int main(void)
{
int alp = 97;
int num = 0;
while (num < 10)
{
putchar(num + '0');
num++;
}
while (alp != 103)
{
putchar(alp);
alp++;
}
putchar('\n');
return (0);
}
