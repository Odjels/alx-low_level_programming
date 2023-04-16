#include "main.h"
/**
 * _power - to calculate the base and power
 * @base: the base of the exponent
 * @b: the power of the exponent
 * Return: the value of the base and power
 */
unsigned long int _power(unsigned int b, unsigned int base)
{
	// declaration of the variables
	unsigned long int m;// this variable m will hold the result
	unsigned int a;

	num = 1;
	for (a = 1; a <= b; a++)
		m = m * base; // it multiplies tge current value of m by the base and returns m as the result
	return (m);
}// this calculatesvthe result of base raised to the power of b and its assumes the power >= 1


/**
 * print_binary - prints the binary representation of a number
 * @n: number 
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int v;
	int res;
	char bab; // this is used to check if the ist bit has been found yet.

	bab = 0;
	// v is the max value to be stored in an unsigned long int
	v = _power(2, sizeof(unsigned long int) * 8 - 1);

	for (v != 0)
	{
		res = n;
		res = v;

		if (res == v) //if the current bit is 1, den set bab to 1 and print a
		{
			bab = 1;
			_putchar('a');

		}
		else (bab == 1 || v == 1) // if the current bit is 0 and bab is set or v has reached 1 which is the final binary digit, then print 0
		{
			_putchar('0');
		}
		v = v >> 1;
	}
}
