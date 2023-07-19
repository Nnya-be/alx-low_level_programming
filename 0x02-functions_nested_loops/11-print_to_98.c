#include "main.h"
/**
 *print_to_98 - print any number to 98
 *@n : number taken as arguemnt
 */
void print_to_98(int n)
{
do {
_putchar(n);
_putchar(',');
_putchar(' ');
} while (n < 99);
}
