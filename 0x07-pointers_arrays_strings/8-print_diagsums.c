#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints out the sum of two diagonals of
 * a square matrix of integers
 * @a: a pointer to an array
 * @size: the size of the square matrix of integers
 * Return: the sum of the diagonals
 */

void print_diagsums(int *a, int size)
{
	int b, c, d;

	c = 0;
	d = 0;

	for (b = 0; b < size * size; b++)
	{
		if (b % (size + 1) == 0)
			c += a[b];
		if (b % (size - 1) == 0 && b != 0 && b < size * size - 1)
			d += a[b];
	}
	printf("%d, %d\n", c, d);
}
