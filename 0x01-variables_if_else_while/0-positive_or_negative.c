#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point of the program.
 *Return: Always 0 (success).
 */

int main(void)
{
int n;   /** Generating the seed for the random number*/
srand(time(0));
  /** using the seed to generate the random number*/
n = rand() - RAND_MAX / 2;
  /** Comparing for the positive condition */
if (n > 0)
{
  printf("%d: is positive", n);
}  /** Comparing for the negative condition */
if (n < 0)
{
  printf("%d: is negative", n);
}  /** Comparing for the zero condition */
if (n == 0)
{
  printf("%d: is zero", n)
}
return (0);
}
