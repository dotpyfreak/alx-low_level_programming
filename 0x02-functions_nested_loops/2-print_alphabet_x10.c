#include "main.h"

/**
 * print_alphabet_x10 - Prints the letters of the alphabets
 * Return: void (Success)
 */

void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 97;
		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
	i++;
	}
}
