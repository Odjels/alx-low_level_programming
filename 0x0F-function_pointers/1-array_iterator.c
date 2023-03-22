#include "function_pointers.h"

/**
 * array_iterator - a function given as a parameter
 * @array: arry to execute func on
 * @size: is the size o the array
 * @action: is a pointer to the unction
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i:

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i])
			i++
		}
	}
}
