#include "main.h"
/**
 *_strlen_recursion - returns the number of string
 *Return:number on completion
 *@s : the string input
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
