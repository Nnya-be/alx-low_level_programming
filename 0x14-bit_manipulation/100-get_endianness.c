#include "main.h"
/**
 *get_endianness - checks the endianness
 *Return: The endianness
 */
int get_enianness(void)
{
unsigned int num = 1;
if (*(char *)&num == 1)
{
return (1);
}
else
{
return (0);
}
}
