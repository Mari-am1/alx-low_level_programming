#include <stdio.h>
#include "main.h"
/**
 * main - program that prints its name, followed by a new line
 *
 * @argc: count the argument numbers
 *
 * @argv: display the name of arguments
 *
 * Return: (0)
 */
int main(int argc __attribute__((unused)), char **argv)
{
printf("%s\n", argv[0]);
return (0);
}
