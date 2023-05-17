#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* check_num - check - string there are digit
* @str: array str
* Return: Always  0         (success)
*/
int check_num(char *str)
{
/*Declaring variables*/
unsigned int w;

w = 0;
while (w < strlen(str)) /*count string*/

{
if (!isdigit(str[w])) /*check if str there are digit*/
{
return (0);
}

w++;
}
return (1);
}

/**
* main - Print the name of the program
* @argc: Count arguments
* @argv: Arguments
* Return: Always 0   (success)    .
*/

int main(int argc, char *argv[])

{

/*Declaring variables*/
int w;
int str_to_int;
int sum = 0;

w = 1;
while (w < argc) /*Goes through the whole array*/
{
if (check_num(argv[w]))

{
str_to_int = atoi(argv[w]); /*ATOI --> convert string to int*/
sum += str_to_int;
}

/*Condition if one of the number contains symbols that are not digits*/
else
{
printf("Error\n");
return (1);
}

w++;
}

printf("%d\n", sum); /*print sum*/

return (0);
}
