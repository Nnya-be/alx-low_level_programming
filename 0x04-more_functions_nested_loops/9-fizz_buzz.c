#include <stdio.h>
/**
 *fizz_buzz - prints the fizz and buzz based on the number
 */
void fizz_buzz(void)
{
int i;
char fizz[] = "Fizz";
char buzz[] = "Buzz";
char fizz_b[] = "FizzBuzz";
for (i = 1; i <= 100; i++)
{
if ((i % 3) == 0)
{
printf("%s", fizz);
}
if ((i % 5) == 0)
{
printf("%s", buzz);
}
if (((i % 3) == 0) && ((i % 5) == 0))
{
printf("%s", fizz_b);
}
else
{
printf("%d", i);
}
printf(" ");
}
printf("\n");
}
