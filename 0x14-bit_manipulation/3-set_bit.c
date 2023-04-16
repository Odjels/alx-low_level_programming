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

	// this is to check if the index is valid by seeing if its < the number of bits in an unsigned long int
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	b = _power(2,index);// this could also be done by b = 1 << index
	*n = *n | b;// this is a bit pattern to combine the bits of *n and b and the result will be storrd in *n.

	return (1);
}
