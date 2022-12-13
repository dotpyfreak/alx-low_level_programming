#include "main.h"

/**
 * print_alphabet - Prints the letters of the alphabets
 * Return: void (Success)
 */

void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

}
