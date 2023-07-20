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
