#include "main.h"
/**
 *rev_string - print a string in reverse
 *@s : the string to be taken
 *return: nothing
 */
void rev_string(char *s)
{
if (*s == '\0')
{
return;
}
rev_string(s + 1);
_putchar(*s);
}
