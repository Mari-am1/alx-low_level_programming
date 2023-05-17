#include "main.h"
#include <stdlib.h>

/**
* argstostr - main entry
* @ac: int input
* @av: double pointer array
* Return: 0
*/

char *argstostr(int ac, char **av)
{
int m, a, r =0, i=0;   
char *str;
if (ac == 0 || av == NULL)
return (NULL);

for (m = 0; m < ac; m++)
{

for (a = 0; av[m][a]; a++)
i++;
}
i += ac;
str = malloc(sizeof(char) * i + 1);
if (str == NULL)
return (NULL);

for (m = 0; m < ac; m++)
{

for (a = 0; av[m][a]; a++)
{
str[r] = av[m][a];
r++;
}
if (str[r] == '\0')
{
str[r++] = '\n';
}
}
return (str);
}
