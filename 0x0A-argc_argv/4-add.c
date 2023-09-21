#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that adds positive numbers.
 *
 * @argc: counts the argument
 *
 * @argv: display the name of argument
 *
 * Return: (0) or (1)
 */
int main(int argc, char **argv)
{
if (argc == 1)
printf("0\n");
else
{
int i = 0, sum = 0;
for (i = 1; i < argc; i++)
{
if (*argv[i] >= '0' && *argv[i] <= '9')
sum = sum + atoi(argv[i]);
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
}
return (0);
}
