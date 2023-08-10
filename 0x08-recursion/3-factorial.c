#include "main.h"
/**
 *factorial - finds the factorial of numbers
 *Return: negative 1 on error number for the factorial
 *@n : the number to be caculated
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
