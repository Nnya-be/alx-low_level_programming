#include <stdio.h>
/**
 *fizz_buzz - prints the fizz and buzz based on the number
 */
void fizz_buzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3) == 0)
printf("fizz");
else if ((i % 5) == 0)
printf("buzz");
else if ((i % 3) == 0 && (i % 5) == 0)
printf("fizzbuzz")
else
printf("%d", i);

printf(" ");
}
printf("\n");
}
