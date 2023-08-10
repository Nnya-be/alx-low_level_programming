#include "main.h"
/**
 *factorial - finds the factorial of numbers
 *@n : the number to be caculated
 *return: -1 on error number for the factorial
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
return (n * factorial(n -1));
}
