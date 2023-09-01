#include "main.h"
/**
 *binary_to_uint - Function to print the decimal representation of a binary
 *@b: The string of binary
 *@Return: The number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i = 0, count = 0;
if (b == NULL || *b == '\0')
{
return (0);
}
while (b[count] != '\0')
{
count++;
}
--count;
while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
if (b[i] == '1')
{
result += (1U << count);
}
count--;
i++;
}
return (result);
}
