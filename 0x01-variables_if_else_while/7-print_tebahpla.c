#include <stdio.h>
/**
 *main - Entry point of program
 *Return: Always 0 (success)
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
