#include "main.h"

/**
 * print_number - prints an integer using _putchar only
 * @n: any given number
 * Return: an integer
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_number(-(unsigned int)n);
	}
	else
		print_number(n);

	_putchar('\n');
}
