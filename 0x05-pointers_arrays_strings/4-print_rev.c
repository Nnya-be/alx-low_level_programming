#include <string.h>
#include "main.h"
/**
 *print_rev - used to print a string in reverse
 *@str : the string to be printed
 */
void print_rev(char *str)
{
int i;
int length = strlen(str);
for (i = length - 1; i >= 0; i--)
{
_putchar(str[i]);
}
_putchar('\n');
}
