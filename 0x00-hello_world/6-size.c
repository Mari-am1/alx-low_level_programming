#include <stdio.h>
/**
 * main - A program that print a line using the printf function
 * Return: 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %li byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %li byte(s)\n", (unsigned long)sizeof(b));
printf("size of an long int: %li byte(s)\n", (unsigned long)sizeof(c));
printf("size of an long long int: %li byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %li byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
