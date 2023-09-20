#include "main.h"

/**
* _strstr - Function finds the first occurrence.
* @haystack: The string that   we searched about.
* @needle: The substring to be located.
* Return: If the substring is located - a pointer to the beginning
* of the located substring.
* If it is not located - NULL.
*/

char *_strstr(char *haystack, char *needle)
{
int w;
if (*needle == 0)
return (haystack);

while (*haystack)
{
w = 0;
if (haystack[w] == needle[w])
{
do {
if (needle[w + 1] == '\0')
return (haystack);
w++;
} while (haystack[w] == needle[w]);
}
haystack++;
}
return ('\0');
}
