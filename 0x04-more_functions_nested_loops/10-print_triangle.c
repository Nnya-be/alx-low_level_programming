#include "main.h"
/**
 *print_triangle - print the triangle
 *@size : the size of the triangle
 */
void print_triangle(int size)
{
int i;
int j;
if (size <= 0)
_putchar('\n');
else
{
for (i = size; i > 0; i--)
{
for (j = 0; j < size; j++)
{
if (j >= i)
_putchar('#');
else
_putchar(' ');
}
_putchar('\n');
}
}
}
