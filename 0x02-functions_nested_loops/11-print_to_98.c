#include "main.h"
/**
 *print_to_98 - print any number to 98
 *@n : number taken as arguemnt
 */
void print_to_98(int n)
{
if (n < 99)
{
while (n < 99)
{
_putchar(n);
n++;
}
}
else
{
while (n > 97)
{
_putchar(n);
n--;
}
}
}
