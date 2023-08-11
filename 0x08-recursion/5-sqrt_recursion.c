#include "main.h"
/**
*_sqrt_recursion - takes the square root of a number
*@n : the number to be square rooted
*Return : 1 on success
*_sqrt_recursion_help - takes the number and manupulates it
*@n : the number passed in
*@g : the guessed number
*/
int _sqrt_recursion_help(int n, int g)
{
if (g * g == n)
{
return (g);
}
if (g * g > n)
{
return (-1);
}
return (_sqrt_recursion_help(n, g + 1));
};

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt_recursion_help(n, 0));
}
