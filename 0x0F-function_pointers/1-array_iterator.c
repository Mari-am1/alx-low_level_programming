#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a parameter
 * @array: address of the array
 * @size: size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != 0 && action != 0)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
