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
_putchar(num + '0');
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
