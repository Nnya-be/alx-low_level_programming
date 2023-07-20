#include "main.h"
/**
 *_isupper - Deals with finding if a character is uppercase
 *Return: 0 for none uppercase 1 for uppercase
 */
int _isupper(int c)
{
if (c < 91 && c > 64)
return (1);
else
return (0);
}
