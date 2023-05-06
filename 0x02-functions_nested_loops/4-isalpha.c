#include "main.h"

/**
* _isalpha - checks for alphabetic character
* Return: 1 if h is a letter, 0 otherwise
*/
int _isalpha(int h)
{
return ((h >= 'a' && h <= 'z') || (h >= 'A' && h <= 'Z'));
}
