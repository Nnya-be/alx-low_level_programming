#include "main.h"
/**
 *times_table - prints out the 9times table
 */
void times_table(void)
{
int i;
int j;
int num;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
num = i * j;
if (j == 0)
{
_putchar(num + '0');
}
if (num < 10 && j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(num + '0');
}
else if (num >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
}
}
_putchar('\n');
}
}
