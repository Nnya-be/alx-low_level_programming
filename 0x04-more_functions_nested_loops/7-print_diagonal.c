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
int j;
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
{
if (j == i)
_putchar("\\");
if (j != i)
_putchar(' ');
}
_putchar('\n');
}
}
_putchar('\n');
}
