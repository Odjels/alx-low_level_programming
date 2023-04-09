#include "main.h"

/**
 * get_bit - return the value of a bit at a given index.
 * @n: of the bit you want to get
 * @index: is the index
 *
 * Return: the value of the bits at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	j = n & i;
	if (j == i)
		return (1);

	return (0);
}
