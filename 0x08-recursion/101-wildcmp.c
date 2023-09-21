#include "main.h"

/**
* wildcmp - Compare strings
* @s1: pointer to string params
* @s2: pointer to string params
* Return: 0
*/

int wildcmp(char *s1, char *s2)
{
if ((*s2) == '\0' && (*s1) == '\0')
return (1);
if ((*s2 == '*') &&(*(s2 + 1) == '\0'))
return (1);
if (*(s2 - 1) == '*')
{
if ((*s2 >= 'a' && *s2 <= 'z') || (*s2 == '.'))
{
if ((*s2 != *s1) && (*s1 != '\0'))
return (wildcmp(s1 + 1, s2));
}
}
else if (((*s1 >= 'a' && *s1 <= 'z') || (*s1 == '.')) && (*s1 == *s2))
return (wildcmp(s1 + 1, s2 + 1));
else if ((*s2 == '*') && (*s1 == *(s2 + 1)))
return (wildcmp(s1 + 1, s2 + 2));
else if (*s2 == '*')
return (wildcmp(s1, s2 + 1));
else if (*s1 == '-')
return (1);
return (0);
}
