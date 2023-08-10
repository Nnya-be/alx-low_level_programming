#include "main.h"
/**
 *_pow_recursion - takes the power of a number to another
 *@x : the first number
 *@y : the second number
 *Return: negative on less than 0
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
