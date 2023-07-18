#include <stdio.h>
/**
 *main - Entry point of the program
 *Return: Always 0 (success)
 */
int main(void)
{
for (int i = 0; i <= 9; i++)
{
for (int j = 0; j <= 9; j++)
{
putchar(i);
putchar(j);
putchar(',');
putchar(' ');
}
}
return (0);
}
