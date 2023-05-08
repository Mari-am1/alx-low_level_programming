#include "main.h"

/**
* print_chessboard - Prints a chessboard.
* @a: The chessboard to be printed.
*/

void print_chessboard(char (*a)[8])
{
int x, o;
for (x = 0; a[x][7]; x++)
{
for (o = 0; o < 8; o++)
_putchar(a[x][o]);
_putchar('\n');
}
}
