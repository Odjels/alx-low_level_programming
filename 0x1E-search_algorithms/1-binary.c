#include "search_algos.h"

/**
 * binary_search - Searching for a value in a sorted array
 *                 of integers.
 * @array: points to the first element of the array to search.
 * @size: number of elements in the array.
 * @value: This is the value to search for.
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	int lef = 0, righ = size - 1, med, a;

	if (array == NULL)
		return (-1);

	while (lef <= righ)
	{
		printf("Searching in array: ");
		for (a = lef; a < righ; a++)
			printf("%d, ", array[a]);
		printf("%d\n", array[a]);

		med = (lef + righ) / 2;
		if (array[med] == value)
			return (med);
		else if (array[med] < value)
			lef = med + 1;
		else
			righ = med - 1;
	}
	return (-1);

