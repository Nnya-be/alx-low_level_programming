#include "search_algos.h"
/**
 *linear_search - Uses linear search algorithm to find an element.
 *@array: The pointer to the array first element.
 *@size: The size of the array.
 *@value: The value to be found.
 *Return: The index where the value is located, or -1 if not found.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
