#include "main.h"

/**
 * print_triangle - builds and prints a triangle followed by a new line
 * @size: size of triangle
 * Return: Triangle
 */

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = a; b < size; b++)
				_putchar(' ');
			for (b = 1; b <= a; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

