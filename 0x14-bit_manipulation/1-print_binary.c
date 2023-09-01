#include "main.h"
/**
 *print_binary - Prints the binary representations of a number
 *@n: The number
 *Return: nothing
 */
void print_binary(unsigned long int n)
{
int i = 50, holder;
if (n == 0)
{
_putchar('0');
}
while (i >= 0)
{
holder = (n >> i) & 1;
if (holder == 1)
{
_putchar(((n >> i) & 1) + '0');
}
}
}
