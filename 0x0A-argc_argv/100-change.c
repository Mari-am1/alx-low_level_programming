#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - prints the minimum number of coins to
* make change for an amount of money
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
int w, m, r;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
w = atoi(argv[1]);
r = 0;
if (w < 0)
{
printf("0\n");
return (0);
}

for (m = 0; m < 5 && w >= 0; m++)
{
while (w >= coins[m])
{
r++;
w -= coins[m];
}
}
printf("%d\n", r);
return (0);
}
