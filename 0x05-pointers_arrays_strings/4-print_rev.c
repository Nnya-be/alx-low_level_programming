#include "main.h"
/**
 *print_rev - used to print a string in reverse
 *@str : the string to be printed
 */
void print_rev(char *str)
{
while (*str != '\0')
{
str++;
}
while (str >= 0)
{
_putchar(*str);
}
_putchar('\n');
}
