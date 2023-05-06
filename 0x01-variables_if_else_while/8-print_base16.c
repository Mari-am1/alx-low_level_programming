#include <stdio.h>

/**
* main - Prints numbers between 0 to 9 and letters between a to f.
*
* Return: 0 (Success)
*/
int main(void)
{
int x;

for (x = 28; x < 38; x++)
{
putchar(x);
}
for (x = 97; x < 103; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
