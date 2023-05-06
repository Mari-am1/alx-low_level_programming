#include <stdio.h>
/**
 * main - A program that print a line using the printf function
 * Return: 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int x;
	long long int y;
	float z;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(z));
return (0);
}
