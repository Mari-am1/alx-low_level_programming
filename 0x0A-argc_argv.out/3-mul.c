#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main -  program that multiplies two numbers.
 *
 * @argc: counts the argument
 *
 * @argv: display the argument
 *
 * Return: (0) or (1)
 */
int main(int argc, char **argv)
{
if (argc == 3)
{
int x = 0, r = 0, mul = 0;
x = atoi(argv[1]);
r = atoi(argv[2]);
mul = x *r;
printf("%d\n", mul);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
