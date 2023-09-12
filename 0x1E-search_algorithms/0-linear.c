#include "search_algos.h"

/**
 * linear_search - searching  for a value in an array
 * @array: This points to the first index in an array
 * @size: the Number of elements in the array
 * @value:  Elements to be searched
 * Return: if the value is not present or the array is null, -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t blab;

	if (array == NULL)
		return (-1);

	for (blab = 0; blab < size; blab++)
	{
		printf("Value checked array[%ld] = [%d]\n", blab, array[blab]);
		if (array[blab] == value)
			return (blab);
	}
	return (-1);
}
