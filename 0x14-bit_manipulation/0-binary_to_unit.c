#include "main.h"
/**
 *binary_to_uint - A function to convert a binary to unsigned int
 *@b: The string of binary
 *Return: The number computed
 */
unsigned int binary_to_uint(const char *b)
{
int len = 0,i = 0;
unsigned int result = 0;
if (b == NULL)
{
return (0);
}
while (b[len] != '\0')
{
len++;
}
--len;
while (b[i] != '\0')
{
if (b[i] != '1' && b[i] != '0')
{
return (0);
}
if (b[i] == '1')
{
result += (1U << len);
}
len--;
i++;
}
return (result);
}
