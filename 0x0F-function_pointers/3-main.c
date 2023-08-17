#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - the start of program
 *@argc : the arg count
 *@argv : the arg vector
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
int a = atoi(argv[1]);
int b = atoi(argv[3]);
int result;
char *s = argv[2];
int (*f)(int, int) = get_op_func(s);
if (argc != 4)
{
printf("Error\n");
return (98);
}
if (f == NULL)
{
printf("Error\n");
return (98);
}
if ((*s == '/' || *s == '%') && b == 0)
{
printf("Error\n");
return (100);
}
result = f(a, b);
printf("%d\n", result);
return (0);
}
