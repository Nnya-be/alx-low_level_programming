#include <stdio.h>
#include "main.h"
/**
 *fibonacci - prints out the first 50 fibbos
 */
void fibonacci(void)
{
int i;
int first;
int second;
int sum;
first = 1;
second = 2;
printf("%d, ", first);
printf("%d, ", second);
for (i = 1; i <= 50; i++)
{
sum = first + second;
printf("%d, ", sum);
first = second;
second = sum;
}
pritnf("\n");
}
