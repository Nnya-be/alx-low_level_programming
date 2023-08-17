#include "3-calc.h"
#include <stddef.h>
/**
 *get_op_func - function to the operator
 *@s : the operator
 *Return: always 0 on success
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
if (*s == NULL)
{
return (NULL);
}
while (ops[i].op != NULL)
{
if (*(ops[i].op) == *s)
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
