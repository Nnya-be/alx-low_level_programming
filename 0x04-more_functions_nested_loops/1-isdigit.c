#include "main.h"
/**
 *_isdigit - checks to see if a number is a digit.
 * @c : type int the number to be checked
 *Return: 0 Always on false 1 on true.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
