#include <string.h>
#include "main.h"
/**
 *puts_half - prints half of string
 *@str : the string to be manipulated
 *return: nothing
 */
void puts_half(char *str)
{
int length = strlen(str);
int i;
if (length % 2 == 0)
{
for (i = length / 2; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return;
}
 for (i = (length + 1) / 2; i <= length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
