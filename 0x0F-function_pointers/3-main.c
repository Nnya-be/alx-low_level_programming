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
int a = atoi(argv[1]);
int b = atoi(argv[3]);
int result;
int (*f)(int, int);
f = get_op_func(argv[2]);
if (argc != 4)
{
printf("Error\n");
return (98);
}
if (argv[2][1] != '\0')
{
printf("Error\n");
return (99);
}
if ((*(argv[2]) == '/' || *(argv[2]) == '%') && b == 0 || f == NULL)
{
printf("Error\n");
return (100);
}
result = f(a, b);
printf("%d\n", result);
return (0);
}
