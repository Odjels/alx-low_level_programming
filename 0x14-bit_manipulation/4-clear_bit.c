#include "main.h"

/**
 * clear_bit - the value of a bit to 0 at a given index.
 * @n: number
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it works, or -1 if an error occurrs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int w;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	w = ~(1 << index);
	*n = *n & w;

	return (1);
}
