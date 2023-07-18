#include <stdio.h>
/**
 *main - Entry of the program
 *Return: Always 0 (success)
 */
int main(void)
{
for (char c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (char c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar("\n");
return (0);
}
