#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the adress of the integer to be swapped written as &a
 * @b: the address of the other integer to be swapped written as &b
 * Return: the values of previous ints in exchanged variables
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
