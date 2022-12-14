#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: void
 */

void times_table(void);
{
	{
		int a, b, c;

		for (a = 0; a < 10; a++)
		{
			for (b = 0; b < 10; b++)
			{
				c = b * a;
				if (c == 0)
				{
					_putchar(b + '0');
				}

				if (b < 10 && a != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(b + '0');
				} else if (b >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((b / 10) + '0');
					_putchar((b % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
