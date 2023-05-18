#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
* is_digit - checks if a string contains a non-digit char
* @s: string to be evaluated
* Return: 0 if a non-digit is found, 1 otherwise
*/

int is_digit(char *s)
{
int q = 0;
while (s[q])
{
if (s[q] < '0' || s[q] > '9')
return (0);
q++;
}
return (1);
}

/**
* _strlen - returns the length of a string
* @s: string to evaluate
* Return: the length of the string
*/

int _strlen(char *s)
{
int q = 0;

while (s[q] != '\0')
{
q++;
}
return (q);
}

/**
* errors - handles errors for main
*/

void errors(void)
{
printf("Error\n");
exit(98);
}

/**
* main - multiplies two positive numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: always 0 (Success)
*/

int main(int argc, char *argv[])
{
char *s1, *s2;
int x, y, z, m, h, f, s, *result, a = 0;
s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
x = _strlen(s1);
y = _strlen(s2);
z = x + y + 1;
result = malloc(sizeof(int) * z);
if (!result)
return (1);
for (m = 0; m <= x + y; m++)
result[m] = 0;
for (x = x - 1; x >= 0; x--)
{
f = s1[x] - '0';
h = 0;
for (y = _strlen(s2) - 1; y >= 0; y--)
{
s = s2[y] - '0';
h += result[x + y + 1] + (f *s);
result[x + y + 1] = h % 10;
h /= 10;
}
if (h > 0)
result[x + y + 1] += h;
}
for (m = 0; m < z - 1; m++)
{
if (result[m])
a = 1;
if (a)
_putchar(result[m] + '0');
}
if (!a)
_putchar('0');
_putchar('\n');
free(result);
return (0);
}
