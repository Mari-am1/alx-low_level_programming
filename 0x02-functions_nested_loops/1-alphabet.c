#include "main.h"
#include <stdio.h>

/**
 * main - print_alphabet
 * print_alphabet - print the alphabet in lowercase
 * Return: Always 0.
 */
void print_alphabet(void);
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
int x = 97;
while (x < 123)
{
putchar(x);
x++;
}
putchar('\n');
}
