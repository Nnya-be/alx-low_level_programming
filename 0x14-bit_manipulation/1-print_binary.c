#include "main.h"
/**
 *print_binary - Prints the binary representations of a number
 *@n: The number
 *Return: nothing
 */
void print_binary(unsigned long int n)
{
int bitp = sizeof(unsigned long int) * 8 -1, flag;
unsigned long int i;
if (n == 0)
{
_putchar('0');
}
while (bitp >= 0)
{
i = 1UL << bitp;
if ((n & i) != 0)
{
_putchar('1');
flag = 1;
}
else if (flag == 1)
{
_putchar('0');
}
bitp--;
}
}
