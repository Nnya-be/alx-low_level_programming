#include "main.h"
/**
 *print_last_digit - It returns the last digit
 *@n: is the number to be computed
 *Return: number of the last digit
 */
int  print_last_digit(int n)
{
int a;
if(n < 0)
a = n * -1;
if (a != 0)
{
double x = a / 10;
int y;
x = (int)x;
y = a - (x * 10);
if (y != 0)
{
_putchar(y);
return (y);
}
}
_putchar('0');
return (0);
}
