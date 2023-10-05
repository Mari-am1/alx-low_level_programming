#include<stdio.h>
#include"main.h"
/**
 * array_range - function that creates an array of integers
 * @min: the first index in the array
 * @max: the last index in the array
 * Return: integer pointer
 */
int *array_range(int min, int max)
{
int i;
int *s;
if (min > max)
return (NULL);
s = (int *)malloc(sizeof(int) * ((max - min) + 1));
if (s == 0)
return (NULL);
for (i = 0; min <= max; i++)
s[i] = (min++);
return (s);
}
