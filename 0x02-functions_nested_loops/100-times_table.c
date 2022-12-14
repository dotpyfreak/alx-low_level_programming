#include "main.h"

/**
 * print_times_table - to print the n times table
 * @n: any given integer
 * Return: a multiplication table if n is less than 15
 */

void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		int i, j, k;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				k = j * i;
				if (j == 0)
				{
					_putchar(k + '0');
				}

				if (k < n && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				} else if (k >= n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}

}
