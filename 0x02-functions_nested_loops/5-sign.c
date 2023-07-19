#include "main.h"
/**
 *print_sign - Takes the signed value into account
 *@n : int type
 *Return: 0 on equal 1 on positive -1 on negatives
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
