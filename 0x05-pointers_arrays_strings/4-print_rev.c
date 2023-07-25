#include "main.h"
/**
 *print_rev - used to print a string in reverse
 *@str : the string to be printed
 */
void print_rev(char *str)
{
int length;
while (*str != '\0')
{
length++;
str++;
}
while (length >= 0)
{
_putchar(str[length]);
}
_putchar('\n');
}
