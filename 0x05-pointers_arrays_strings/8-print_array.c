#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: a given array
 * @n: number of elements of the array to be printed
 * Return: prints n elements
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (i != n - 1)
	{
		for (i = 0; i < n; i++)
			printf("%d, ", a[i]);
	}
	else
		printf("%d", a[i]);
	printf("\n");
}
