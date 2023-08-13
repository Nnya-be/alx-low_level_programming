#include "main.h"
#include <string.h>
/**
*is_palindrome - checks for palindromes
*@s : the string to be manupulated
*Return: 0 on fail and 1 on success
*/
int is_palindrome(char *s)
{
int length = strlen(s);
if (*s == 0)
{
return (1);
}
if (*s != *(s + length - 1))
{
return (0);
}
return (is_palindrome(s + 1));
}
