#include "main.h"
/**
 *print_diagonal - print number of diagonals
 *@n : the number of diagonals to print
 */
void print_diagonal(int n)
{
if (n > 0)
{
int i;
for (i = 0; i <= n; i++)
{
int j;
for (j = 0; j <= i; j++)
{
if (j == i)
_putchar('\\');
else
_putchar(' ');
}
}
}
_putchar('\n');
}
