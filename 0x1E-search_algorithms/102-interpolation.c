#include "search_algos.h"


/**
  * interpolation_search - Searches using interpolation search.
  * @array: A pointer to the first element of the array to search.
  * @size: The size of the array.
  * @value: The value to search for.
  *
  * Return: Null, -1, the first index where the value is located.
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t a, lef, righ;

	if (array == NULL)
		return (-1);

	for (lef = 0, righ = size - 1; righ >= lef;)
	{
		a = lef + (((double)(righ - lef) / (array[righ] - array[lef])) * (value - array[lef]));
		if (a < size)
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", a;
			break;
		}

		if (array[a] == value)
			return (a);
		if (array[a] > value)
			righ = a - 1;
		else
			lef = a + 1;
	}

	return (-1);
}
