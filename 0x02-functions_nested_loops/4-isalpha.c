#include "main.h"
/**
 *_isalpha - checks for alphabets
 *Return: 1 on succes 0 on failure
 *@c: an int type
 */
int _isalpha(int c)
{
if (c > 96 && c < 123)
return (1);
if (c > 64 && c < 91)
return (1);
else
return (0);
}
