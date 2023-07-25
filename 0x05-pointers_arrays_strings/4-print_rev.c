#include "main.h"
/**
 *print_rev - used to print a string in reverse
 *@str : the string to be printed
 */
void print_rev(char *str)
{
int length = 0;
while (*str != '\0')
{
length++;
str++;
}
int i;
for (i = length - 1; i >= 0; i--)
{
_putchar(str[i]);
}
_putchar('\n');
}
