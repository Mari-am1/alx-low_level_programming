#include "main.h"

/**
 * _islower - check if the character is lowercase or not.
 *
 * @c:function parameter
 *
 * Return: 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
