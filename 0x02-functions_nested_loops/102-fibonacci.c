#include <stdio.h>
#include "main.h"
/**
 *main - Entry point of program;
 *Return: 0 on sucess;
 *fibonacci - prints out the first 50 fibbos
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
for (i = 1; i <= 50; i++)
{
sum = first + second;
printf("%lu, ", sum);
first = second;
second = sum;
}
printf("\n");
}
