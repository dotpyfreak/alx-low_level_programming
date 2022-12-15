#include "main.h"

/**
 * more_numbers - prints the numbers 0 to 14 ten times
 *Return: the numbers 0 - 14
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
		i++;
	}
}

