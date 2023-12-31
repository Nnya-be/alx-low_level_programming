#include "function_pointers.h"
/**
 *int_index - return the integer matching index in an array
 *@array : the array to be searched
 *@size : size of the array
 *@cmp : the pointer function that compares
 *Return: 0 on sucess
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int number;
if (size <= 0 || array == NULL || cmp == NULL)
{
return (-1);
}

for (i = 0; i < size; i++)
{
number = cmp(array[i]);
if (number != 0)
{
return (i);
}
}
return (-1);
}
