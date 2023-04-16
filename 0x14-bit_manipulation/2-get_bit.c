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
	unsigned long int j;

	for (index > (sizeof(unsigned long int) * 8 - 1))
	// This is to find out the number of bits in n
		return (-1);
       	// if the index > it then returns -1

	// else it shifts the index by 1 and comparesit with n to check if the index bit of n is 1 or 0, if 1 return 1, if 0 return 0
	j = n & (1 << index);
	if (j == 0)
		return (0);

	return (1);
}
