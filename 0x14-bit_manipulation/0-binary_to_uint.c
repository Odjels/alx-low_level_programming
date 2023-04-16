#include "main.h"

/**
 * binary_to_unit - converts the binary number to an unsigned int.
 * @b: pointing to  the string of 0 and 1 chars
 *
 * Return:converted number, or 0 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int a;// declaration of the variables
	unsigned int c;

	c = 0;
	if ( b == NULL)
		return (0);

	// this loop is to check for binary digits which is a 0 or 1
 
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0')
			return (0);	
		if ( b[a] != '1')
			return (0);
	}
	
	// This loop is to convert it to the corresponding binary numbers
	for (a = 0; b[a] != '\0'; a++)
	{
		c = c << 1;// this is done by shifting the current value of c by 1bit to the left
		if (b[a] == '1')
			c = c + 1;// Adding the binary value to the cureent char if the result is 1.
	}
	return (c);
}
