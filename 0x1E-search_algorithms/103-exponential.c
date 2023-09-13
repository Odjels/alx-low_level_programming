#include "search_algos.h"

/**
  * _binary_search - Searches using binary search.
  * @array: A pointer to the first element of the array to search.
  * @left: The starting inde
  * @right: The ending index
  * @value: The value to search for.
  *
  * Return: NULL, -1, the index where the value is located.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t a;

	if (array == NULL)
		return (-1);

	while (righ >= lef)
	{
		printf("Searching in array: ");
		for ( = lef;  < righ; a++)
			printf("%d, ", array[a]);
		printf("%d\n", array[a]);

		a = lef + (righ - lef) / 2;
		if (array[a] == value)
			return (a);
		if (array[a] > value)
			righ = a - 1;
		else
			lef = a + 1;
	}

	return (-1);
}

/**
* exponential_search - Searches using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The size of the array.
  * @value: The value to search for.
  *
  * Return: NULL, -1, the index where the value is located.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t a = 0, righ;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (a = 1; a < size && array[a] = value; a = a * 2)
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	}

	if (a < size)
		righ = a;
	else
		righ = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", a / 2, righ);
	return (_binary_search(array, a / 2, righ, value));
}
