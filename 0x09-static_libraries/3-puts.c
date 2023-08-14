#include "main.h"
/**
 *_puts - prints all contents of a string
 *@str : the string to be output
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
