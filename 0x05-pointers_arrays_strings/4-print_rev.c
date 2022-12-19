#include "main.h"

/**
 * print_rev - prints the reverse of a string
 * followed by a new line
 * @s: the given string
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int v;
	int n = 0;

	while (s[n] != '\0')
		n++;
	for (n = (n - 1); n >= 0; n--)
	{
		v = s[n];
		_putchar(v);
	}
	_putchar('\n');
}
