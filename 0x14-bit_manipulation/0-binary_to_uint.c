#include "main.h"

/**
 * binary_to_unit - converts the binary number to an unsigned int.
 * @b: pointing to  the string of 0 and 1 chars
 *
 * Return:converted number, or 0 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int c;

	c = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		c <<= 1;
		if (b[i] == '1')
			c += 1;
	}
	return (c);
}
