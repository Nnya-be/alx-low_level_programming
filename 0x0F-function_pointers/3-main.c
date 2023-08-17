#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - the start of program
 *@argc : the arg count
 *@argv : the arg vector
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
int a;
int b;
int result;
char operand;
int (*f)(int, int);
if (argc != 4)
{
printf("Error\n");
return (98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
f = get_op_func(argv[2]);
if (!f)
{
printf("Error\n");
return (99);
}
operand = *argv[2];
if ((operand == '/' || operand == '%') && b == 0)
{
printf("Error\n");
return (100);
}
result = f(a, b);
printf("%d\n", result);
return (0);
}
