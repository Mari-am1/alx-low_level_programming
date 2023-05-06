#include "main.h"

/**
* rev_string - Reverses a string
* @s: Input string
* Return: String in reverse
*/

void rev_string(char *s)
{
char rev = s[0];
int counter = 0;
int o;

while (s[counter] != '\0')
counter++;
for (o = 0; i < counter; o++)
{
counter--;
rev = s[o];
s[o] = s[counter];
s[counter] = rev;
}
}
