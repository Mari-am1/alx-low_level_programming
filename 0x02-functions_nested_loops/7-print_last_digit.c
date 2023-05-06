#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @n: the int to extract the last digit from
* Return: value of the last digit
*/
int print_last_digit(int u)
{
int t;
if (u < 0)
u = -u;
t = u % 10;

if (t < 0)
t = -t;
_putchar(t + '0');
return (t);
}
