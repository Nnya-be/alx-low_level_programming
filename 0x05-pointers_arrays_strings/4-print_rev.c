#include "main.h"
/**
 *print_rev - used to print a string in reverse
 *@str : the string to be printed
 */
void print_rev(char *str)
{
int i;
int length = 0;
while (*str != '\0')
{
length++;
str++;
}
for (i = length; i >= 1; i--)
{
_putchar(*str);
str--;
}
_putchar('\n');
}
