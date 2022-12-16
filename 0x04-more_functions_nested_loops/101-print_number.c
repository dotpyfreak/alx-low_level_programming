#include "main.h"

/**
 * print_number - prints an integer using _putchar only
 * @n: any given number
 * Return: an integer
 */

void print_number(int n)
{	
	unsigned int m;

	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
	else
	{
		m = n;
	}

	if (m / 10)
	{
		print_number(m / 10);
	}	
	_putchar((n % 10) + '0');
}
