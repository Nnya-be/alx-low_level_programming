#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *print_array - prints the content of an array
 *@a : the array
 *@n : the number contained in the array
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d, ", a[i]);
if (i == n - 1)
{
printf("%d\n");
}
}
}
