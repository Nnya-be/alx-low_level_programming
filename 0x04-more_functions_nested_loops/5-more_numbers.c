#include "main.h"
/**
 *more_numbers - prints the 0 - 14 x10
 */
void more_numbers(void)
{
int i;
int j;
for (i = 1; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
{
_putchar('0' + j / 10);
}
_putchar('0' + j % 10);
}
_putchar('\n');
}
}
