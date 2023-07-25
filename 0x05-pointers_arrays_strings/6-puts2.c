#include <string.h>
#include "main.h"
/**
 *puts2 - prints the half of a string
 *@str : the string to be manupulated
 */
void puts2(char *str)
{
int length = strlen(str);
int i;
for (i = 0; i < length; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
