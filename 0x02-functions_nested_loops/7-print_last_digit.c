#include "main.h"
/**
 *print_last_digit - It returns the last digit
 *@n: is the number to be computed
 *Return: number of the last digit
 */
int  print_last_digit(int n)
{
int a;

if (n < 0)
n = -n;

a = n % 10;

if (a < n)
a = -a;

_putchar(a + '0');
return (a);
}
