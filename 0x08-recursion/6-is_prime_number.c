#include "main.h"
/**
*is_prime_number_help - does the recursive work
*@n : the number to be found
*@d : the divisor
*Return: 0 on failure
*/
int is_prime_number_help(int n, int d)
{
if (n <= 1)
{
return (0);
}
if (d == 1)
{
return (1);
}
if (n % d  == 0)
{
return (0);
}
return (is_prime_number_help(n, d - 1));
}
/**
*is_prime_number - checks for prime number
*@n : the number to be taken
*Return : 1 on finding a prime number
*/
int is_prime_number(int n )
{
if (n <= 1 )
{
return (0);
}
return (is_prime_number_help(n, n - 1));
}
