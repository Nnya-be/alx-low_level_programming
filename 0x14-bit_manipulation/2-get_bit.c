#include "main.h"
/**
 *get_bit - Get the bit at an index
 *@n : The binary number
 *@index: The index
 *Return: The number at the index
 */
int get_bit(unsigned long int n, unsigned int index)
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
