#include "main.h"
/**
 *_puts_recursion - is a recursion of the puts version
 *Return : nothing on base case
 *@s : the string
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
else
{
_putchar(*s);
_puts_recursion(s++);
}
}
