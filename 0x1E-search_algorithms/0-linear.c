#include "search_algos.h"
/**
 *linear_search - Uses linear search algorithm to find an element.
 *@array: The pointer to the array first element.
 *@size: The size of the array.
 *@value: The value to be found.
 *Return: The index where the value is located.
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array || !size)
		return (-1);
	while ((size_t)i < size)
	{
		printf("Value checked array [%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
