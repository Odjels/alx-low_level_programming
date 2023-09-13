#include "search_algos.h"

/**
  * jump_search - Searching using jump search.
  * @array: This points to the first element of the array to search.
  * @size: This is the size of the array.
  * @value: The value to search for.
  *
  * Return: NULL, -1, the first index where the value is located.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t a, jum, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (a = jum = 0; jum < size && array[jum] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jum, array[jum]);
		a = jum;
		jum += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", a, jum);

	if (jum >= size)
		jum = size - 1;

	for (; a < jum && array[a] < value; a++)
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	printf("Value checked array[%ld] = [%d]\n", a, array[a]);

	return (array[a] == value ? (int)a : -1);
}
