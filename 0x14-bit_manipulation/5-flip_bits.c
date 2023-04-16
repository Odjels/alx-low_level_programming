#include "main.h"
/**
 * flip_bits - flip one number to another.
 * @n: one number
 * @m: another number
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ref, bab;
	unsigned int b, r;
	unsigned int i;

	b = 0;
	ref = n ^ m;
	
	for (r = 0; r < (sizeof(unsigned long int) * 8); r++)
	{
		i = ref & bab;
		if (bab == i)
			b++;
		bab = bab << 1;
	}

	return (b);
}
