#include "main.h"
/**
 *flip_bits - Flip the bits at an index
 *@n : The number
 *@m : The replacing number
 *Return: The modified number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int result = n ^ m;
unsigned int count = 0;
while (result > 0)
{
count += result & 1;
result >>= 1;
}
return (count);
}
