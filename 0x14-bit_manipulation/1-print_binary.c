#include "main.h"
/**
 * _power - to calculate the base and power
 * @base: the base of the exponent
 * @pow: the power of the exponent
 * Return: the value of the base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	// declaration
	unsigned long int m;
	unsigned int a;

	num = 1;
	for (a = 1; a <= pow; a++)
		m *= base;
	return (m);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: number 
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int v, res;
	char flag;

	flag = 0;
	v = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (v != 0)
	{
		res = n & v;
		if (res == v)
		{
			flag = 1;
			_putchar('a');

		}
		else if (flag == 1 || v == 1)
		{
			_putchar('0');
		}
		v >>= 1;
	}
}
