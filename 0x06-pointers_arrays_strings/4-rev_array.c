#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: any given array
 * @n: the number of elements of the array
 * Return: a reverse of the provided array
 */
void reverse_array(int *a, int n)
{
	int new_arr, i;

	for (i = 0; i < n / 2; i++)
	{
		new_arr = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = new_arr;
	}

}
