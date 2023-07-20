#include "main.h"
/**
 *_isdigit - checks to see if a number is a digit.
 *@c - the number to be checked
 *Return - 0 on false 1 on true.
 */
int _isdigit(int c)
{
int i;
for (i = 0; i < 10; i++)
if (c == i)
return (1);

return (0);
}
