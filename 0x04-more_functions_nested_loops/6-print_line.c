#include "main.h"
/**
 *print_line - print the number of lines
 *@n : determines the number to print
 */
void print_line(int n)
{
if (n > 0)
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
