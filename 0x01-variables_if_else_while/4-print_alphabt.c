#include <stdio.h>
/**
 *main - Entry point of program
 *Return: Always 0 (success)
 */
int main(void)
{
char c;
for (c = 'c'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
putchar(c)
}
return (0);
}
