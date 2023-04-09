#include "main.h"
/**
 * flip_bits - flip one number to another.
 * @n: one number
 * @m: another number
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ref, result;
	unsigned int b, r;

	b = 0;
	result = 1;
	ref = n ^ m;
	for (r = 0; r < (sizeof(unsigned long int) * 8); r++)
	{
		if (result == (ref & result))
			b++;
		result <<= 1;
	}

	return (b);
}
