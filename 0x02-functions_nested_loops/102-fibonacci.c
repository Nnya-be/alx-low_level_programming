#include <stdio.h>
#include "main.h"
/**
 *main - Entry point of program;
 *fibonacci - prints out the first 50 fibbos
 *Return: 0 on sucess;
 */
int main(void)
{
fibonacci();
return (0);
}
void fibonacci(void)
{
int i;
unsigned long first;
unsigned long second;
unsigned long sum;
first = 1;
second = 2;
printf("%lu, ", first);
printf("%lu, ", second);
for (i = 3; i <= 50; i++)
{
sum = first + second;
printf("%lu", sum);
first = second;
second = sum;
if (i == 50)
printf("\n");
else
printf(", ");
}
}
