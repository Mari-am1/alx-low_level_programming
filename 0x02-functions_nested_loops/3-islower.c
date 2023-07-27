#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - check if the character is lowercase or not.
 *
 *@c:function parameter
 *
 * Return: Always 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
