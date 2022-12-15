#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: an integer representing the length of the square
 * Return: a square
 */

void print_square(int size)
{
	int n = 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (n <= size)
		{
			int a;

			for (a = 0; a < size; a++)
			{
				_putchar('#');
			}
			n++;
			_putchar('\n');
		}
	}
}

