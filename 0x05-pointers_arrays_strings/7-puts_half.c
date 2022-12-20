#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * followed by a new line
 * @str: any provided string
 * Return: half of a string
 */

void puts_half(char *str)
{
	int n = 0, a, x;

	while (str[n] != '\0')
		n++;
	if (n % 2 == 0)
	{
		for (a = n / 2; str[a] != '\0'; a++)
		{
			x = str[a];
			_putchar(x);
		}
	}
	else
	{
		for (a = (n - 1) / 2; str[a] != '\0'; a++)
		{
			x = str[a];
			_putchar(x);
		}
	}
	_putchar('\n');
}
