#include "function_pointers.h"
/**
 *array_iterator - function that prints the array using a function pointer
 *@array : the array to be printed
 *@size : size of the array
 *@action: the function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (size <= 0)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
