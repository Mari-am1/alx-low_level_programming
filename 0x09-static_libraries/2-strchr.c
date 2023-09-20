#include "main.h"

/**
* _strchr - Locates a character in a string.
* @s: The string to be searched.
* @c: The character to be located.
* Return: If c is found - a pointer to the first occurence.
* If c is not found - NULL.
*/

char *_strchr(char *s, char c)
{
int w;
for (w = 0; s[w] >= '\0'; w++)
{
if (s[w] == c)
return (s + w);
}
return ('\0');
}
