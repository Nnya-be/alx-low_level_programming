#include "main.h"
/**
 *print_rev - used to print a string in reverse
 *@str : the string to be printed
 *return: no value
 */
void print_rev(char *str)
{
if (*str == '\0')
{
_putchar('\n');
return;
}
print_rev(str + 1);
_putchar(*str);
}
