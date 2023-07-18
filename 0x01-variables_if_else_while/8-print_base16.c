#include <stdio.h>
/**
 *main - Entry point of program
 *Return: Always 0 (success)
 */
int main(void)
{
for (int i = 0; i < 10; i++)
{
putchar(i);
}
for (char c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
}
