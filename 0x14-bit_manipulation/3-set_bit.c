#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index.
 * @index:is the index, starting from 0 of the bit you want to set
 * @n: pointer number to i
 * Return: 1 if it works, or -1 if an error occurrs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	b = 1 << index;
	*n = *n | b;

	return (1);
}
