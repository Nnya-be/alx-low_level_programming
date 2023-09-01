#include "main.h"
/**
 *set_bit - Set the bit at an index
 *@n: the number pointer
 *@index: The index of insertion
 *Return: The number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int i;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
i = 1UL << index;
if ((n & i) != 0)
{
return (1);
}
else
{
return (0);
}
}
