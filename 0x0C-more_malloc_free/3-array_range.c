#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min number of elements
 * @max: max number of elements
 * Return: array pointer address NULL if it fails
 */

int *array_range(int min, int max)
{
	int i, *b;

	if (min > max)
		return (NULL);

	b = malloc((max - min + 1) * sizeof(int));
	if (b == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		b[i] = min;
		min++;
	}
	return (b);
}
