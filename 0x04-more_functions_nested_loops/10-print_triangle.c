#include "main.h"
/**
 *print_triangle - print the triangle
 *@size : the size of the triangle
 */
void print_triangle(int size)
{
if (size <= 0)
_putchar('\n');
else
{
int i;
int j;
for (i = n; i > 0; i--)
{
for (j = 0; j < n; j++)
{
if (j >= i)
_putchar('#');
else
_putchar(' ');
}
}
_putchar('\n');
}
}
