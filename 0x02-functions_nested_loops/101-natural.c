#include <stdio.h>
#include "main.h"
/**
 *print_multiple - takes numbers that are multiples of 3 and 5
 */
void print_multiple(void)
{
int number;
int added;
for (number = 1023; number > 0; number --)
{
if((number % 3) == 0)
added += number;
else if ((number % 5) == 0)
added += number;
}
printf("%d\n", added);
}
