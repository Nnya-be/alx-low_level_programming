#include "search_algos.h"
/**
 *binary_search - seaches for a value in a sorted array using binary algo.
 *@array : A pointer to the first element of the array to search from.
 *@size: The number of elements in the array.
 *@value: The value to search for.
 *Return: The index at which the value is found else -1.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, i, end = size - 1, mid;

	if (!array || size == 0)
		return (-1);

	while (start <= end)
	{
		mid = start + (end - start) / 2;
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%i", array[i]);
			if (i < end)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
