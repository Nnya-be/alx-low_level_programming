#include "main.h"
/**
 *_strlen_recursion - returns the number of string
 *Return:number on completion
 *@s : the string input
 */
int _strlen_recursion(char *s)
{
int number;
if (*s == '\0')
{
return (number);
}
else
{
number++;
_strlen_recursion(s + 1);
}
}
