#include "main.h"
/**
 *print_last_digit - It returns the last digit
 *@n: is the number to be computed
 *Return: number of the last digit
 */
int  print_last_digit(int n)
{
int a = _abs(n);
if (a != 0)
{
double x = a / 10;
int y;
x = (int)x;
y = a - (x * 10);
if (y != 0)
{
return (y);
}
}
return (0);
}
