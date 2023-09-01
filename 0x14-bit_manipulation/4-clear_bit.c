#include "main.h"
/**
 *clear_bit - used to clear a bit at an index
 *@n: a pointer to the number
 *@index: the index to work on
 *Return: The number
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int i;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
i = 1UL << index;
i = ~i;
*n &= i;
return (1);
}
