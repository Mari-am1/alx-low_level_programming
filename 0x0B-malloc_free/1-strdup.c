#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - duplicate to new memory space location
* @str: char
* Return: 0
*/

char *_strdup(char *str)
{
char *aaa;
int w, o = 0;

if (str == NULL)
return (NULL);

w = 0;
while (str[w] != '\0')
w++;

aaa = malloc(sizeof(char) * (w + 1));

if (aaa == NULL)
return (NULL);

for (o = 0; str[o]; o++)

aaa[o] = str[r];
return (aaa);
}
