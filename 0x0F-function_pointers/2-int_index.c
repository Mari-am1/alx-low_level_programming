#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: address of the array
 * @size: size of the array
 * @cmp: pointer to function
 * Return: index of the array or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int value, x;
if (size <= 0)
return (-1);
if (array != 0 && cmp != 0)
{
for (x = 0; x < size; x++)
{
value = cmp(array[x]);
if (value != 0)
return (x);
}
}
return (-1);
}
