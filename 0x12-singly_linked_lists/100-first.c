#include <stdio.h>

/**
 * first: the function executed before main
 * Return: nothing
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow\n");
	printf(", I bore my house upon my back!\n");
}
